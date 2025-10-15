#include <string>
#include <iostream>

namespace PK_InputArgs
{
    class InputArgsHandler
    {
        public:
            InputArgsHandler(int argc, char **argv);
            ~InputArgsHandler() {};

        private:
            std::string _sNumberOfPhilosophers;
            std::string _sTimeBeforePhilosopherDie;
            std::string _sTimeToEat;
            std::string _sTimeToSleep;
            std::string _sMaxNbEatingBeforeLeave;

            void displayHelperToUser();
    };
}