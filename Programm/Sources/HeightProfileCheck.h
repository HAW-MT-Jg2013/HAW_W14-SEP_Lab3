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
enum height_fsm_states {H_Standby, ItemDetected, ItemWrong, WrongType1, WrongType2};


const int lowVal   = 3780;
const int midVal   = 3380;
const int highVal  = 3082;
const int tolSmall = 10;
const int tolWide  = 60;


class HeightProfileCheck : public Plugin{
private:
    height_fsm_states currentState;
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

#endif /* HEIGHT_PROFILE_CHECK_H */
