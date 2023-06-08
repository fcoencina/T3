#include "magnetic_sensor.h"

MagneticSensor::MagneticSensor(int zone){
    setZone(zone);
}
void MagneticSensor::setSensorOpen() {
    setClose(false);
}
void MagneticSensor::setSensorClose() {
    setClose(true);
}
