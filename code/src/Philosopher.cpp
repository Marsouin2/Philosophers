#include "Philosopher.h"

namespace PK_Philosopher
{
    Philosopher::Philosopher(const std::string& sTimeBeforePhilosopherDie, const std::string& sTimeToEat, const std::string& sTimeToSleep) :
                             _timeBeforePhilosopherDie(std::stof(sTimeBeforePhilosopherDie)), 
                             _timeToEat(std::stof(sTimeToEat)), 
                             _timeToSleep(std::stof(sTimeToSleep))
    {
        
    }
}