#include "window.h"
#include "windowview.h"

Window::Window(){}
Window::Window(MagneticSensor * sensor, WindowView * v): magneticSensor(sensor), view(v) {
    isClose=true;
    magneticSensor->setSensorClose();
    view->setWindowModel(this);
}
void Window::changeState() {
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
