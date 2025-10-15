#include "InputArgsHandler.h"

namespace PK_InputArgs
{
    InputArgsHandler::InputArgsHandler(int argc, char **argv)
    {
        if (argc == 2)
        {
            const std::string tempo(argv[1]);
            if (tempo == "--help")
            {
                displayHelperToUser();
            }
            else
            {
                std::cerr << "No enough argument given (type --help if needed)" << std::endl;
            }
        }
        else if (argc == 6)
        {
            _sNumberOfPhilosophers = argv[1];
            _sTimeBeforePhilosopherDie = argv[2];
            _sTimeToEat = argv[3];
            _sTimeToSleep = argv[4];
            _sMaxNbEatingBeforeLeave = argv[5]; 
        }
        else
        {
            if (argc > 6)
                std::cerr << "Too many argument given (type --help if needed)" << std::endl;
            else
                std::cerr << "No enough argument given (type --help if needed)" << std::endl;
        }
    }

    void InputArgsHandler::displayHelperToUser()
    {
        std::cout << "USAGE\n\t./philo nbr_p time_die time_eat time_sleep nbr_e\nDESCRIPTION\n\t"
        "nbr_p number of philosophers\n\t"
        "time_die The time a philosopher will die if he doesn’t eat (in seconds)\n\t"
        "time_eat The time it takes a philosopher to eat (in seconds)\n\t"
        "time_sleep The time it takes a philosopher to sleep (in seconds)\n\t"
        "nbr_e maximum number times a philosopher eats before exiting the program"
         << std::endl;
    }
}