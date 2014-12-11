/**
 * File: UnitTester.h
 *
 * unit-test for plugin HeightProfileCheck
 *
 * \author Martin Kroh
 * \version 0.1
 * \date 2014-12-11
 */
#ifndef UNIT_TESTER_H
#define UNIT_TESTER_H
#include <iostream>
#include <fstream>
#include "HeightProfileCheck.h"
#include "StubHeightSensor.h"

class UnitTester {
private:
    //HeightProfileCheck* unitUnderTest;
    FestoProcessSensors* unitUnderTest;
    StubHeightSensor* sensorStub;
public:
    UnitTester();
    void runTest();
};
#endif
