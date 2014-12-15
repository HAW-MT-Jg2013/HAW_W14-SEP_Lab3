/**
 * File:   StubHeightSensor.cpp
 *
 * unit-test for plugin HeightProfileCheck
 * height sensor stub for getHight method
 *
 * \author  Martin Kroh
 * \version 0.1
 * \date    2014-12-11
 */

#include "StubHeightSensor.h"
#include <stdio.h>

StubHeightSensor::StubHeightSensor(FILE* inputFile) {
    this -> inputFile = inputFile;
}

double StubHeightSensor::getHight() {
    int sensorValue = 0;
    int result = 0;
    if (!feof(inputFile)) {
        result = fscanf(inputFile, "%d\n", &sensorValue);
        if (result != 1) {
            printf("Fehler beim Lesen eines Wertes.\n");
        }
    }
    return sensorValue;
}
