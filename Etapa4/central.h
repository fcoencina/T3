#ifndef CENTRAL_H
#define CENTRAL_H
#include <QObject>
#include <vector>
#include <QTimer>
#include "sensor.h"
using namespace std; //needed by vector<>

class Central : public QObject{
    Q_OBJECT
    public:
        explicit Central(QObject *parent = nullptr);
        void addNewSensor(Sensor * ps);
        void setIsArmed(bool armada);
        ~Central();
    private slots:
        void checkZones();
        void intermediaryFunction();
    private:
        void checkCloseZones(bool closeZones[]);
        vector<Sensor *> zones;  // keep references to all sensors already installed in doors and windows.
        QTimer * timer;
        bool isArmed=false;
};

#endif // CENTRAL_H
