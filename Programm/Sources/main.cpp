/* 
 * File:   main.cpp
 * Author: Lehmann
 *
 * Created on 8. November 2013, 16:24
 */

#include <cstdlib>
#include <cstdio>

#define TEST                // enable tests

#include "factory.h"
#ifdef TEST
#include "UnitTester.h"
#endif

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
#ifdef TEST
    volatile UnitTester t;
#endif
    
    bool run = true; // set this variable to false whilst debugging to end program.
    FSMFactory factory;

    FSM* fsm = factory.createFSM();

    // Start Processing
    while (fsm != NULL && run) {
        fsm->eval();
    }

    delete fsm;

    return 0;
}

