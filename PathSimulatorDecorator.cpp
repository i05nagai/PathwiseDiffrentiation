#include "PathSimulatorDecorator.h"

/******************************************************************************
 * Constructers and Destructers.
 ******************************************************************************/
PathSimulatorDecorator::PathSimulatorDecorator(
    const boost::shared_ptr<const PathSimulatorBase>& innerSimulator)
    :
    _innerSimulator(innerSimulator)
{
}

PathSimulatorDecorator::~PathSimulatorDecorator() 
{
}

boost::numeric::ublas::vector<double>& PathSimulatorDecorator::simulateOnePath(
    boost::numeric::ublas::vector<double>& processes,
    const boost::numeric::ublas::vector<double>& spots,
    const double timeStepSize,
    const std::size_t numberOfTimeSteps) const
{
    return _innerSimulator->simulateOnePath(processes, spots, timeStepSize, numberOfTimeSteps);
}
