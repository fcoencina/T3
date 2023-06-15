#include "magneticsensor.h"

MagneticSensor::MagneticSensor(int z)/*: ???*/ {
    view = new MagneticSensorView();
}
void MagneticSensor::setSensorOpen() {
    setClose(false);
    view->setOpenView();
}
void MagneticSensor::setSensorClose() {
    setClose(true);
    view->setCloseView();
}
MagneticSensorView * MagneticSensor::getView() {
    return view;
}
MagneticSensor::~MagneticSensor(){
    delete view;
}
