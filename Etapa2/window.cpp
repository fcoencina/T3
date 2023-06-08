#include "window.h"

Window::Window(){
}
Window::Window(MagneticSensor *mg){
    mg->setSensorClose();
    magneticSensor = mg;
}
void Window::changeState() {
    if (magneticSensor->isClose())
        magneticSensor->setSensorOpen();
    else
        magneticSensor->setSensorClose();
}
