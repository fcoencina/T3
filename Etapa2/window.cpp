#include "window.h"

Window::Window(){
}
Window::Window(int z){
    magneticSensor.setSensorClose();
    magneticSensor.setZone(z);
}
void Window::changeState() {
    if (magneticSensor.isClose())
        magneticSensor.setSensorOpen();
    else
        magneticSensor.setSensorClose();
}
