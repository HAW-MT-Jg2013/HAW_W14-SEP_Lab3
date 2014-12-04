/**
 * File:   HeightProfileCheck.h
 *
 * class for checking the height profile of the items
 *
 * \author  Jannik Beyerstedt
 * \version 0.1
 * \date    2014-11-25
 */

#ifndef HEIGHT_PROFILE_CHECK_H
#define HEIGHT_PROFILE_CHECK_H

#include <iostream>
#include <fstream>

#include "plugin.h"
#include "FestoProcessSensors.h"

enum heights {Low, Middle, High, Incorrect};
enum fsm_states {Standby, ItemDetected, ItemWrong, WrongType1, WrongType2};


int lowVal   = 3780;
int midVal   = 3380;
int highVal  = 3082;
int tolSmall = 10;
int tolWide  = 60;


class HeightProfileCheck {
private:
    fsm_states currentState;
    FestoProcessSensors *process;
    bool itemDiagnosis;
    std::ofstream logFile;
public:
    HeightProfileCheck( FestoProcessSensors *process);
    ~HeightProfileCheck();
private:
    void evalEvents();
    void evalState();
public:
    void evalCycle();
    bool result();
private:
    void logDefectType(std::string defectDecsription);
};

#endif
