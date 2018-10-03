/*
 * CurrentFlowCloseness.h
 *
 *  Created on: 01.10.2018
 *      Author: Alexander van der Grinten (alexander.vandergrinten@gmail.com)
 *      Adapted from Closeness.h
 */

#ifndef CURRENT_FLOW_CLOSENESS_H_
#define CURRENT_FLOW_CLOSENESS_H_

#include "Centrality.h"

namespace NetworKit {

/**
 * @ingroup centrality
 */
class CurrentFlowCloseness : public NetworKit::Centrality {
public:
	CurrentFlowCloseness(const Graph& G, bool normalized=true, bool checkConnectedness=true);

	/**
	 * Computes current-flow closeness cetrality on the graph passed in constructor.
	 */
	void run() override;
};

} /* namespace NetworKit */

#endif /* CURRENT_FLOW_CLOSENESS_H_ */
