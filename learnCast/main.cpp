#include <iostream>
#include "ofFcommon.h"
#include "welcome.h"
#include "ask.h"
#include "finalBye.h"

void jumpliner();
void askOne();
void askTwo();
void finalGoodbye();

int main()
{
    unsigned int infoMaximum;
    unsigned int infoProgress;
    unsigned int porcentInfo;
    unsigned int ppsInfo;

    jumpliner();

    welcome();

    //                                                      welcome.h[ok]
    askOne();
    std::cin >> infoMaximum;
    jumpliner();
    askTwo();
    std::cin >> infoProgress;
    jumpliner();
    //                                     ask(2,"actually pregress")[ok]
    //                                                          ask.h[ok]
    porcentInfo = infoProgress * 100;
    ppsInfo = porcentInfo/infoMaximum;
    //                                                      sysCalc.h[x]
    std::cout << " Final)Progress: " << ppsInfo << " percentual points.";
    jumpliner();
    //
    //                                               responsePoints.h[x]
    finalGoodbye();

    //                                                    suProgram.h[ok]

    return 0;

}
