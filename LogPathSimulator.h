#pragma once

#include "PathSimulatorDecorator.h"

#include <boost/shared_ptr.hpp>

class LogPathSimulator 
    : public PathSimulatorDecorator
{
public:
    LogPathSimulator(const boost::shared_ptr<const PathSimulatorBase>& innerSimulator);
    virtual ~LogPathSimulator();

    /******************************************************************************
     * inherited virtual functions.
     ******************************************************************************/
    virtual void simulateOnePath(
        boost::numeric::ublas::vector<double>& processes,
        const boost::numeric::ublas::vector<double>& spots,
        const double timeStepSize,
        const std::size_t numberOfTimeSteps) const;
    //boost::numeric::ublas::vector<double> makeProcesses() const;

private:
    /******************************************************************************
     * private variables.
     ******************************************************************************/
            
};

