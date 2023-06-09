#ifndef WINDOW_H
#define WINDOW_H
#include "magneticsensor.h"

// Declaración de clase adelantada (forward declaration)
class WindowView;
//??

class Window{
    private:
        Window(); // door creation without sensor is not allowed.
    public:
        Window(MagneticSensor * sensor, WindowView * v);
        void changeState();
    private:
        MagneticSensor * magneticSensor;
        WindowView * view;
        bool isClose;
};

#endif // WINDOW_H
