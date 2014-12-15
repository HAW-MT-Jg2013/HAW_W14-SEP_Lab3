/**
 * File: StubHeightSensor.h
 *
 * unit-test for plugin HeightProfileCheck
 * height sensor stub for getHight method
 *
 * \author Jannik Beyerstedt
 * \version 0.1
 * \date 2014-11-25
 */
#ifndef STUB_HEIGHT_SENSOR_H
#define STUB_HEIGHT_SENSOR_H
#include "FestoProcessSensors.h"

class StubHeightSensor : public FestoProcessSensors {
    //unsigned short height;
private:
    FILE* inputFile;
public:
    StubHeightSensor(FILE* inputFile);
    virtual unsigned short getHight();
    //void setHightValue(unsigned short height);
};
#endif

