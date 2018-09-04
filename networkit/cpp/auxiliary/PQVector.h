/*
 * PQVector.h
 *
 *  Created on: 21.09.2018
 *      Author: Eugenio Angriman
 */

#ifndef PQVECTOR_H_
#define PQVECTOR_H_

#include <algorithm>
#include <vector>

#include "../auxiliary/Log.h"

namespace Aux {
/*
 * A simple prio queue for Kadabra that allows inspecting the ranking.
 */
class PQVector {
private:
	std::vector<uint64_t> elements;
	std::vector<double> values;
	std::vector<uint64_t> position;
	uint64_t virtualSize;
	const uint64_t size;
	const uint64_t maxKey;

public:
	PQVector(const uint64_t size, const uint64_t maxKey);
	void insert(const uint64_t newElement, const double newValue);
	double getValue(const uint64_t i) const { return values[i]; }
	uint64_t getElement(const uint64_t i) const { return elements[i]; }
	uint64_t getSize() const { return virtualSize; }
	void clear();
};

inline PQVector::PQVector(const uint64_t size, const uint64_t maxKey)
    : size(size), maxKey(maxKey) {
	if (maxKey < size) {
		throw std::runtime_error("maxKey must be bigger than the size.");
	}
	clear();
}

inline void PQVector::clear() {
	elements.resize(size);
	values.assign(size, 0.);
	position.resize(maxKey);
	uint64_t i;
	for (i = 0; i < size; ++i) {
		elements[i] = i;
		position[i] = i;
	}
	for (i = size; i < maxKey; ++i) {
		position[i] = i;
	}
	virtualSize = 0;
}

inline void PQVector::insert(const uint64_t newElement, const double newValue) {
	uint64_t ub = std::upper_bound(values.begin(), values.begin() + virtualSize,
	                               newValue, std::greater<double>()) -
	              values.begin();
	uint64_t oldPos;
	// We assume that if the same key is inserted again, its value will be
	// greater than before (i.e., oldPos > ub).
	if (ub < size) {
		oldPos = std::min(position[newElement], size - 1) + 1;
		if (oldPos < size) {
			assert(values[ub] <= newValue);
		}
		if (virtualSize < size) {
			++virtualSize;
		}

		std::rotate(values.begin() + ub, values.begin() + oldPos - 1,
		            values.begin() + oldPos);
		std::rotate(elements.begin() + ub, elements.begin() + oldPos - 1,
		            elements.begin() + oldPos);
		values[ub] = newValue;
		elements[ub] = newElement;
		position[newElement] = ub;
		for (auto it = elements.begin() + ub + 1; it < elements.begin() + oldPos;
		     ++it) {
			++position[*it];
		}
	}
}
} // namespace Aux

#endif
