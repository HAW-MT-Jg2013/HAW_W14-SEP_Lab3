/**
 * File:   FestoProcessAccess.h
 * 
 * Class providing high level access to sensors and actuators of the FESTO
 * system.
 *
 * \author  Prof. Dr. Thomas Lehmann
 * \version 1
 * \date    2013-11-01
 */

#ifndef FESTO_PROCESS_ACCESS_H
#define FESTO_PROCESS_ACCESS_H

#include <cstdio>

#include "FestoProcessSensors.h"
#include "processimage.h"
#include "plugin.h"

#define LOG_PROCESS

class FestoProcessAccess : public FestoProcessSensors {
private:
    time_t timeCounter;
    FestoProcessImage* process;
    Plugin* plugin;
    FILE* logFile;

public:
    FestoProcessAccess(FestoProcessImage* processImage);
    virtual ~FestoProcessAccess();
    void addPlugin(Plugin* heightPlugin);
public:
    void updateInputs(void);
    void applyOutput(void);
public:
    void driveRight(void);
    void driveLeft(void);
    void driveSlowRight(void);
    void driveSlowLeft(void);
    void driveStop(void);
    void openJunction(void);
    void closeJunction(void);
    void lightGreenOn(void);
    void lightGreenOff(void);
    void lightYellowOn(void);
    void lightYellowOff(void);
    void lightRedOn(void);
    void lightRedOff(void);
    void turnLEDStartOn(void);
    void turnLEDStartOff(void);
    void turnLEDResetOn(void);
    void turnLEDResetOff(void);
    void turnLEDQ1On(void);
    void turnLEDQ1Off(void);
    void turnLEDQ2On(void);
    void turnLEDQ2Off(void);
    void turnAllOff(void);

    virtual bool isItemAtBeginning(void);
    virtual bool isItemAtHightSensor(void);
    virtual bool hasItemCorrectHight(void);
    virtual bool isItemAtMetalDetector(void);
    virtual bool isMetalDetected(void);
    virtual bool isJunctionOpen(void);
    virtual bool isItemAtSlide(void);
    virtual bool hasItemPassedSlide(void);
    virtual bool isItemAtEnd(void);
    virtual bool isButtonStartPressed(void);
    virtual bool isButtonStartPositiveEdge(void);
    virtual bool isButtonStartNegativeEdge(void);
    virtual bool isButtonStopPressed(void);
    virtual bool isButtonResetPressed(void);
    virtual bool isButtonEmergencyActive(void);
    virtual unsigned short getHight();

    virtual time_t timeCounter1s();
private:
    void logProcessData();
};

#endif	

