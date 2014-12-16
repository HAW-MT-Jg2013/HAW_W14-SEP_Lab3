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
    virtual unsigned short getHight();
    void setHightValue(unsigned short height);

public:
    bool isItemAtBeginning(void) {return 0;};
    bool isItemAtHightSensor(void) {return 0;};
    bool hasItemCorrectHight(void){return 0;};
    bool isItemAtMetalDetector(void) {return 0;};
    bool isMetalDetected(void) {return 0;};
    bool isJunctionOpen(void) {return 0;};
    bool isItemAtSlide(void) {return 0;};
    bool hasItemPassedSlide(void) {return 0;};
    bool isItemAtEnd(void) {return 0;};
    bool isButtonStartPressed(void) {return 0;};
    bool isButtonStartPositiveEdge(void) {return 0;};
    bool isButtonStartNegativeEdge(void) {return 0;};
    bool isButtonStopPressed(void) {return 0;};
    bool isButtonResetPressed(void) {return 0;};
    bool isButtonEmergencyActive(void) {return 0;};
    time_t timeCounter1s() {return 0;};
};

#endif
