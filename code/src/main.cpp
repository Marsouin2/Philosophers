#include <iostream>
#include "InputArgsHandler.h"
#include "ResolveFamineMgr.h"

int main(int argc, char **argv)
{
    try 
    {
        PK_InputArgs::InputArgsHandler inputArgsHandler(argc, argv); // raises std::runtime_error if no enough parameters (resolveFamine is not called in this case)

        PK_ResolveFamineMgr::ResolveFamineMgr resolveFamineMgr(inputArgsHandler.getNumberOfPhilosophers(),
                                                               inputArgsHandler.getTimeBeforePhilosopherDie(),
                                                               inputArgsHandler.getTimeToEat(),
                                                               inputArgsHandler.getTimeToSleep(),
                                                               inputArgsHandler.getMaxNbEatingBeforeLeave());
    }
    catch (const std::exception& e)
    {
        return 1;
    }


    return 0;
}
