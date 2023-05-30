#include "door.h"

Door::Door(){
}
Door::Door(int z){
    magneticSensor.setSensorClose();
    magneticSensor.setZone(z);
}
void Door::changeState() {
    if (magneticSensor.isClose())
        magneticSensor.setSensorOpen();
    else
        magneticSensor.setSensorClose();
}

