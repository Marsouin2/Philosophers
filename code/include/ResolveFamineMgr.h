#include <cstdint>
#include <string>
#include <vector>
#include <memory>

#include "Philosopher.h"
#include "Chopstick.h"

namespace PK_ResolveFamineMgr
{
    class ResolveFamineMgr
    {
        public:
            ResolveFamineMgr(const std::string& sNumberOfPhilosophers, 
                             const std::string& sTimeBeforePhilosopherDie, 
                             const std::string& sTimeToEat, 
                             const std::string& sTimeToSleep, 
                             const std::string& sMaxEatingBeforeLeave);
            ~ResolveFamineMgr();
    
        private:
            std::vector<std::unique_ptr<PK_Philosopher::Philosopher>> _vPhilosophers;
            std::vector<std::unique_ptr<PK_Chopstick::Chopstick>> _vChopsticks;
    };
};