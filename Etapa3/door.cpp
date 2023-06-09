#include "door.h"
#include "doorview.h"

Door::Door(){}
Door::Door(MagneticSensor * sensor, DoorView * v): magneticSensor(sensor), view(v) {
    isClose=true;
    magneticSensor->setSensorClose();
    view->setDoorModel(this);
}
void Door::changeState() {
    if (isClose) {
       magneticSensor->setSensorOpen();
       isClose = false;
       view->setOpen();
    } else {
       magneticSensor->setSensorClose();
       isClose = true;
       view->setClose();
    }
}

