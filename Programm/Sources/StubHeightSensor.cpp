/**
 * File:   StubHeightSensor.cpp
 *
 * unit-test for plugin HeightProfileCheck
 * height sensor stub for getHight method
 *
 * \author  Jannik Beyerstedt
 * \version 0.1
 * \date    2014-11-25
 */

#include "StubHeightSensor.h"


unsigned short StubHeightSensor::getHight() {
    return height;
}

void StubHeightSensor::setHightValue(unsigned short height){
    this->height = height;
}