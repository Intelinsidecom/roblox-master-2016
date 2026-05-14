#pragma once

#include "Replicator.h"
#include "V8DataModel/DataModel.h"

#if defined(I_AM_GOY_THAT_LOVES_VMPROTECT)
#include "VMProtectSDK.h"
#endif


namespace RBX { namespace Network {

// Regularly sends pings through the data pipe to measure total data round-trip time
class Replicator::PingJob : public ReplicatorJob
{
public:
	static const int desiredPingHz = 2;
	static const int maxPingsPerStep = 5;
	PingJob(Replicator& replicator)
		:ReplicatorJob("Replicator DataPing", replicator, DataModelJob::DataIn) 
	{
		RBXASSERT(getArbiter());

		cyclicExecutive = true;
	}

private:
	virtual Time::Interval sleepTime(const Stats& stats)
	{
		return computeStandardSleepTime(stats, 2); 
	}

	virtual Error error(const Stats& stats)
	{
		return computeStandardErrorCyclicExecutiveSleeping(stats, 2); 
	}

	virtual TaskScheduler::StepResult stepDataModelJob(const Stats& stats) 
	{
		#if defined(I_AM_GOY_THAT_LOVES_VMPROTECT)
		VMProtectBeginMutation("20");
		#endif
		if(replicator){
#ifdef RBX_RCC_SECURITY
            // cvx: this might be moved to a better location.
            replicator->sendNetPmcChallenge();
#endif
			DataModel::scoped_write_request request(replicator.get());
			if (TaskScheduler::singleton().isCyclicExecutive() && cyclicExecutive)
			{
				float pingsToDo = updateStepsRequiredForCyclicExecutive(stats.timespanSinceLastStep.seconds(), (float)desiredPingHz, (float)maxPingsPerStep, (float)maxPingsPerStep);
				for (int i = 0; i < (int)pingsToDo; i++)
				{
					replicator->sendDataPing();
				}
			}
			else
			{
				replicator->sendDataPing();
			}
			return TaskScheduler::Stepped;
		}
		#if defined(I_AM_GOY_THAT_LOVES_VMPROTECT)
		VMProtectEnd();
		#endif
		return TaskScheduler::Done;
	}
};


}}
