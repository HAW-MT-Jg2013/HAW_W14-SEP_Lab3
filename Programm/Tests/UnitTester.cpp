/**
 * File: UnitTester.cpp
 *
 * unit-test for plugin HeightProfileCheck
 *
 * \author Martin Kroh
 * \version 0.1
 * \date 2014-12-11
 */

#include <iostream>
#include <fstream>
#include "HeightProfileCheck.h"
#include "FestoProcessSensors.h"
#include "StubHeightSensor.h"
#include "UnitTester.h"

UnitTester::UnitTester() {
    FILE* inputFile = 0;
    inputFile = fopen("", "r");
    if (0 == inputFile) {
        printf("failed\n");
    }
    sensorStub = new StubHeightSensor(inputFile);
    unitUnderTest = new FestoProcessSensors(sensorStub);
}

bool UnitTester::runTest() {
    int i = 0;
    bool correctValue = 0;
    bool testResult = 0;
    for (i = 0; i < 500; i++) {
        unitUnderTest -> evalCycle();
        correctValue = unitUnderTest -> getHight();
        if (true == correctValue) {
            testResult = true;
        }
    }
    return testResult;
}
