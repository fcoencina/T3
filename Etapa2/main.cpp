#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "door.h"
#include "window.h"
#include "central.h"
using namespace std;

int main(int argc, char * argv[]) {
    ifstream fin;
    int nDoors, nWindows;
    vector<Door *> doors;
    vector<Window *> windows;
    Central central;
    if (argc != 2) {
        cout << "Usage: "<<argv[0]<<" <configuration_file>" << endl;
        return -1;
    }
    fin.open(argv[1]);
    if (fin.fail()){
        cout << "Could not read file" << endl;
        return -2;
    }
    cout << "Argument:" <<argv[1]<< endl;

    fin>>nDoors;
    fin>>nWindows;
    cout<<"nDoors: "<<nDoors<<endl;
    cout<<"nWindows: "<<nWindows<<endl<<endl;

    //Leyendo configuracion doors
    for(int i=0; i<nDoors; i++) {
        int x, y, direction_angle, zone;
        fin>>x>>y>>direction_angle>>zone;
        cout<<"Puerta "<<i+1<<endl;
        MagneticSensor *sensor = new MagneticSensor(zone);
        doors.push_back(new Door(sensor));
        central.addNewSensor(sensor);
    }
    //Abriendo y Cerrando doors
    for (uint i=0; i<doors.size(); i++) { //uint : unsigned int
        cout<<endl;
        cout<<"Puerta "<<i+1<<endl;
        doors[i]->changeState();
        doors[i]->changeState();
    }
    cout<<endl;
    //Leyendo configuracion windows
    for(int i=0; i<nWindows; i++) {
        int x, y, direction_angle, zone;
        fin>>x>>y>>direction_angle>>zone;
        cout<<"Ventana "<<i+1<<endl;
        MagneticSensor *sensor = new MagneticSensor(zone);
        windows.push_back(new Window(sensor));
        central.addNewSensor(sensor);
    }
    //Abriendo y Cerrando windows
    for (uint i=0; i<windows.size(); i++) { //uint : unsigned int
        cout<<endl;
        cout<<"Ventana "<<i+1<<endl;
        windows[i]->changeState();
        windows[i]->changeState();
    }
    cout<<endl;
    //Pidiendo a la Central verificar todas las zonas
    central.checkZones();
    //Abriendo la puerta principal
    cout<<endl;
    doors[0]->changeState();
    //Pidiendo nuevamente a la Central verificar las zonas
    cout<<endl;
    central.checkZones();

    // Antes de cerrar el archivo y finalizar el programa
    for (uint i = 0; i < doors.size(); i++) {
        delete doors[i]; // Liberar la memoria asignada a cada objeto Door
    }
    // Limpiar el vector
    doors.clear();

    for (uint i = 0; i < windows.size(); i++) {
        delete windows[i]; // Liberar la memoria asignada a cada objeto Window
    }
    // Limpiar el vector
    windows.clear();

    fin.close();
}
