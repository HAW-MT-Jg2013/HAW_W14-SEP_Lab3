/** 
 * File:   factory.cpp
 *
 * Service class setting up all objects of the system.
 * 
 * \author  Prof. Dr. Thomas Lehmann
 * \version 1
 * \date    2013-11-10
 */

#include "factory.h"
#include "FestoProcessAccess.h"
#include "minilab1008processimage.h"
#include "HeightProfileCheck.h"

FSM* FSMFactory::createFSM(){
    // Create Objects
    FestoProcessImage* processImage = new FestoMiniLab1008ProcessImage();
    FestoProcessAccess* processAccess = new FestoProcessAccess(processImage);
    Plugin* plugin = new HeightProfileCheck(processAccess);
    processAccess->addPlugin(plugin);
    FSM* fsm = new FSM(processAccess, plugin);
    return fsm;
}
