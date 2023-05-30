#include "magnetic_sensor.h"

MagneticSensor::MagneticSensor(){
}
void MagneticSensor::setSensorOpen() {
    setClose(false);
}
void MagneticSensor::setSensorClose() {
    setClose(true);
}
