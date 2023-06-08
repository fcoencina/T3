#include "door.h"

Door::Door(MagneticSensor *mg){
    mg->setSensorClose();
    magneticSensor = mg;
}
void Door::changeState() {
    if (magneticSensor->isClose())
        magneticSensor->setSensorOpen();
    else
        magneticSensor->setSensorClose();
}

