/**
 * File:   StubHeightSensor.h
 *
 * unit-test for plugin HeightProfileCheck
 * height sensor stub for getHight method
 *
 * \author  Jannik Beyerstedt
 * \version 0.1
 * \date    2014-11-25
 */

#ifndef STUB_HEIGHT_SENSOR_H
#define STUB_HEIGHT_SENSOR_H

#include "FestoProcessSensors.h"

class StubHeightSensor : public FestoProcessSensors {
    unsigned short height;

public:
    void setHightValue(unsigned short height);

public:
    virtual bool isItemAtBeginning(void) {return 0;};
    virtual bool isItemAtHightSensor(void) {return 0;};
    virtual bool isItemAtMetalDetector(void) {return 0;};
    virtual bool isMetalDetected(void) {return 0;};
    virtual bool isJunctionOpen(void) {return 0;};
    virtual bool isItemAtSlide(void) {return 0;};
    virtual bool hasItemPassedSlide(void) {return 0;};
    virtual bool isItemAtEnd(void) {return 0;};
    virtual bool isButtonStartPressed(void) {return 0;};
    virtual bool isButtonStartPositiveEdge(void) {return 0;};
    virtual bool isButtonStartNegativeEdge(void) {return 0;};
    virtual bool isButtonStopPressed(void) {return 0;};
    virtual bool isButtonResetPressed(void) {return 0;};
    virtual bool isButtonEmergencyActive(void) {return 0;};
    virtual time_t timeCounter1s() {return 0;};
    
    virtual unsigned short getHight();
};

#endif
