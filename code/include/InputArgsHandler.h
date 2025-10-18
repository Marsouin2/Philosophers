#include <string>
#include <iostream>

namespace PK_InputArgs
{
    class InputArgsHandler
    {
        public:
            InputArgsHandler(int argc, char **argv);
            ~InputArgsHandler() {};

            // getters
            std::string getNumberOfPhilosophers() const { return _sNumberOfPhilosophers; };
            std::string getTimeBeforePhilosopherDie() const { return _sTimeBeforePhilosopherDie; };
            std::string getTimeToEat() const { return _sTimeToEat; };
            std::string getTimeToSleep() const { return _sTimeToSleep; };
            std::string getMaxNbEatingBeforeLeave() const { return _sMaxNbEatingBeforeLeave; };

        private:
            std::string _sNumberOfPhilosophers;
            std::string _sTimeBeforePhilosopherDie;
            std::string _sTimeToEat;
            std::string _sTimeToSleep;
            std::string _sMaxNbEatingBeforeLeave;

            void displayHelperToUser();
    };
}