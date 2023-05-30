#ifndef WINDOW_H
#define WINDOW_H
#include "magnetic_sensor.h"

class Window{
    private:
        Window(); // a window creation without sensor is not allowed.
    public:
        Window(int zona);
        void changeState();
    private:
        MagneticSensor magneticSensor;
};

#endif // WINDOW_H
