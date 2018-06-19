/*
 * GlobalCurveball.cpp
 *
 *  Created on: 26.05.2018
 *      Author: Manuel Penschuck <networkit@manuel.jetzt>
 */

#include "../auxiliary/Random.h"

#include "GlobalCurveball.h"
#include "GlobalCurveballImpl.h"

namespace NetworKit {

GlobalCurveball::GlobalCurveball(const NetworKit::Graph &G,
                                 unsigned number_of_global_trades) :
    impl_(new CurveballDetails::GlobalCurveballImpl{G}),
    number_of_global_trades_{number_of_global_trades}
{
    if (G.isDirected()) {
        throw std::runtime_error("GlobalCurveball supports only undirected graphs");
    }

    if (G.isWeighted()) {
        throw std::runtime_error("GlobalCurveball supports only unweighted graphs");
    }
}

// We have to define a "default" destructor here, since the definition of
// CurveballDetails::GlobalCurveballImpl is not known in the header file
GlobalCurveball::~GlobalCurveball() = default;

void GlobalCurveball::run() {
    if (hasRun) throw std::runtime_error("Call run method only once");

    auto& prng = Aux::Random::getURNG();

    CurveballDetails::GlobalTradeSequence<CurveballDetails::FixedLinearCongruentialMap<node> > hash{
        impl_->getInputGraph().numberOfNodes(), number_of_global_trades_, prng};
    impl_->run(hash);

    hasRun = true;
}

Graph GlobalCurveball::getGraph() {
    if (!hasRun) throw std::runtime_error("Call run method first");
    return impl_->getGraph();
}

std::string GlobalCurveball::toString() const  {
    return "GlobalCurveball";
}

}