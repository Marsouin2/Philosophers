#include "ResolveFamineMgr.h"

namespace PK_ResolveFamineMgr
{
    ResolveFamineMgr::ResolveFamineMgr(const std::string& sNumberOfPhilosophers, 
                                       const std::string& sTimeBeforePhilosopherDie, 
                                       const std::string& sTimeToEat, 
                                       const std::string& sTimeToSleep, 
                                       const std::string& sMaxEatingBeforeLeave)
    {
        // 1- Instantiate all philosophers
        // 2- Instantiate all chopsticks
        for (uint32_t i = 0; i < std::stoi(sNumberOfPhilosophers); ++i)
        {
            _vPhilosophers.push_back(std::make_unique<PK_Philosopher::Philosopher>(sTimeBeforePhilosopherDie, sTimeToEat, sTimeToSleep));
            _vChopsticks.push_back(std::make_unique<PK_Chopstick::Chopstick>());
        }
    }

    ResolveFamineMgr::~ResolveFamineMgr()
    {
        // pointers in vectors for chopsticks and philosophers will be freed automatically thanks to smart pointers
    }
};