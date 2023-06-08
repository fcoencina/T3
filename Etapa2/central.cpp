#include "central.h"
#include <iostream>

Central::Central(){
}
void Central::addNewSensor(Sensor *ps){
    zones.push_back(ps);
}
void Central::checkZones() {
    bool closeZones[2];
    checkCloseZones(closeZones);
    if (closeZones[0] && closeZones[1])
        cout<<"Zonas Cerradas"<<endl;
    else{
        cout<<"Alguna zona está abierta."<<endl;
    }
}
void Central::checkCloseZones(bool closeZones[]) {
    closeZones[0]= closeZones[1] = true;
    for (uint i=0; i< zones.size(); i++)
        closeZones[zones[i]->getZone()] &= zones[i]->isClose();
}
Central::~Central(){
    //delete timer;
    for (uint i = 0; i < zones.size(); i++) {
        delete zones[i]; // Liberar la memoria asignada a cada objeto Sensor
    }
    zones.clear(); // Limpiar el vector
}
