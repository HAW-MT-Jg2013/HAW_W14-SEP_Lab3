/**
 * File:   HeightProfileCheck.cpp
 *
 * class for checking the height profile of the items
 *
 * \author  Jannik Beyerstedt, Daniel Friedrich
 * \version 0.2
 * \date    2014-12-08
 */

#include "HeightProfileCheck.h"


HeightProfileCheck::HeightProfileCheck(FestoProcessSensors *process) {
    this->process = process;
    currentState = H_Standby;
    
    logFile.open("hightCheckLog.txt");
}

HeightProfileCheck::~HeightProfileCheck() {
    this->process = NULL;
    
    logFile.close();
}

void HeightProfileCheck::evalCycle() {
    evalEvents();
    evalState();
}

void HeightProfileCheck::evalEvents() {
    unsigned short height = process->getHight();
    heights heightLevel = Incorrect;
    
    if ( (lowVal-tolSmall) <= height && height <= (lowVal+tolSmall) ) {
         heightLevel = Low;
    }else if ( (midVal-tolWide) <= height && height <= (midVal+tolWide) ) {
        heightLevel = Middle;
    }else if ( (highVal-tolWide) <= height && height <= (highVal+tolWide) ) {
        heightLevel = High;
    }else {
        heightLevel = Incorrect;
    }
    
    
    switch (currentState) {
        case H_Standby:
            if (heightLevel == High) {
                currentState = ItemDetected;
            }
            break;
        case ItemDetected:
            if (heightLevel == Low) {
                currentState = H_Standby;
            }else if (heightLevel == Middle) {
                currentState = ItemWrong;
            }
            break;
        case ItemWrong:
            if (heightLevel == High) {
                currentState = WrongType2;
            }else if (heightLevel == Low) {
                currentState = WrongType1;
            }
            break;
        case WrongType1:
            currentState = H_Standby;
            break;
        case WrongType2:
            currentState = H_Standby;
            break;
        default:
            break;
    }
}

void HeightProfileCheck::evalState() {
    switch (currentState) {
        case H_Standby:
            itemDiagnosis = 0;
            break;
        case WrongType1:
            itemDiagnosis = 1;
            logDefectType("defect type 1");
            break;
        case WrongType2:
            itemDiagnosis = 1;
            logDefectType("defect type 2");
            break;
            
        default:
            break;
    }
    
}

bool HeightProfileCheck::result() {
    return itemDiagnosis;
}

void HeightProfileCheck::logDefectType(std::string defectDescription) {
    if (logFile.is_open()) {
        logFile   << time(NULL) << " wrong item: " <<  defectDescription << std::endl;
        std::cout << time(NULL) << " wrong item: " <<  defectDescription << std::endl;
    }else {
        std::cout << "logfile can´t be accessed" << std::endl;
    }
}