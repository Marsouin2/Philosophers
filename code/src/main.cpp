#include <iostream>
#include "InputArgsHandler.h"
#include "ResolveFamineMgr.h"

int main(int argc, char **argv)
{
    PK_InputArgs::InputArgsHandler inputArgsHandler(argc, argv);

    PK_ResolveFamineMgr::ResolveFamineMgr resolveFamineMgr(inputArgsHandler.getNumberOfPhilosophers(),
                                                           inputArgsHandler.getTimeBeforePhilosopherDie(),
                                                           inputArgsHandler.getTimeToEat(),
                                                           inputArgsHandler.getTimeToSleep(),
                                                           inputArgsHandler.getMaxNbEatingBeforeLeave());

    return 0;
}
