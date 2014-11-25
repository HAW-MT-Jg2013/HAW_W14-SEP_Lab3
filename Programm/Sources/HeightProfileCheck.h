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

#include "plugin.h"
#include "FestoProcessSensors.h"

enum heights {Low, Middle, High};
enum fsm_states {Standby, ItemDetected, ItemWrong, WrongType1, WrongType2};

class HeightProfileCheck {
private:
    fsm_states currentState;
    FestoProcessSensors *process;
    bool itemDiagnosis;
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
    void logDefectType( );
};

#endif
