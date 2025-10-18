#include <string>

namespace PK_Philosopher
{
    class Philosopher
    {
        public:
            Philosopher(const std::string& sTimeBeforePhilosopherDie, const std::string& sTimeToEat, const std::string& sTimeToSleep);
            ~Philosopher(){};
    
        private:
            float _timeBeforePhilosopherDie;
            float _timeToEat;
            float _timeToSleep;
    };
}