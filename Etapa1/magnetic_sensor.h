#ifndef MAGNETIC_SENSOR_H
#define MAGNETIC_SENSOR_H
#include "sensor.h"

class MagneticSensor: public Sensor{
    public:
        MagneticSensor();
        void setSensorOpen();
        void setSensorClose();
};

#endif // MAGNETIC_SENSOR_H
