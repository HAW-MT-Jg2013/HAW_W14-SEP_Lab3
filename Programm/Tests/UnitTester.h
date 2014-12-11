/**
 * File:   UnitTester.h
 *
 * unit-test for plugin HeightProfileCheck
 *
 * \author  Jannik Beyerstedt
 * \version 0.1
 * \date    2014-11-25
 */

#ifndef UNIT_TESTER_H
#define UNIT_TESTER_H

#include <iostream>
#include <fstream>

#include "HeightProfileCheck.h"
#include "StubHeightSensor.h"


class UnitTester {
    HeightProfileCheck* unitUnderTest;
    //FestoProcessSensors* sensorStub;
    StubHeightSensor* sensorStub;
    
public:
    UnitTester();
    ~UnitTester();
private:
    void doTest();
};


#endif
