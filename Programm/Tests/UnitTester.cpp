/**
 * File:   UnitTester.cpp
 *
 * unit-test for plugin HeightProfileCheck
 *
 * \author  Jannik Beyerstedt
 * \version 0.1
 * \date    2014-11-25
 */

#include <stdio.h>

#include "UnitTester.h"
#include "ti_assertion.h"
#include <assert.h>

using namespace std;

UnitTester::UnitTester() {
    sensorStub = new StubHeightSensor();
    unitUnderTest = new HeightProfileCheck(sensorStub);
    
    doTest();
}

UnitTester::~UnitTester() {
    delete unitUnderTest;
}

void UnitTester::doTest() {
    ifstream inputData;
    int dump; char sep;
    
    unsigned short height;
    int trueCount = 0;
    
    // good part: result always false
    inputData.open("processlog1.txt");
    while (inputData >> dump >> sep >> dump >> sep >> height) {
        sensorStub->setHightValue(height);
        unitUnderTest->evalCycle();
        
        if (unitUnderTest->result()) {
            trueCount++;
        }
    }
    ASSERT(0 == trueCount);
    
    cout << "-- good part complete" << endl;
    inputData.close();
    trueCount = 0;
    
    
    // bad part1: result should be one time true
    inputData.open("processlog2.txt");
    while (inputData >> dump >> sep >> dump >> sep >> height) {
        sensorStub->setHightValue(height);
        unitUnderTest->evalCycle();
        
        if (unitUnderTest->result()) {
            trueCount++;
        }
    }
    ASSERT(1 == trueCount);
    
    cout << "-- bad part 1 complete" << endl;
    inputData.close();
    trueCount = 0;
    
    
    // bad part2: result should be one time true
    inputData.open("processlog3.txt");
    while (inputData >> dump >> sep >> dump >> sep >> height) {
        sensorStub->setHightValue(height);
        unitUnderTest->evalCycle();
        
        if (unitUnderTest->result()) {
            trueCount++;
        }
    }
    ASSERT(1 == trueCount);
    
    cout << "-- bad part 2 complete" << endl;
    inputData.close();
    trueCount = 0;
    
    
    cout << "all tests done, result see above!" << endl;
}


