#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "door.h"
using namespace std;

int main(int argc, char * argv[]) {
    ifstream fin;
    int nDoors, nWindows;
    vector<Door *> doors;
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
    cout<<"nWindows: "<<nWindows<<endl;

    for(int i=0; i<nDoors; i++) {
        int x, y, direction_angle, zone;
        fin>>x>>y>>direction_angle>>zone;
        cout<<"Puerta "<<i+1<<endl;
        doors.push_back(new Door(zone));
    }
    for (uint i=0; i<doors.size(); i++) { //uint : unsigned int
        cout<<endl;
        cout<<"Puerta: "<<i+1<<endl;
        doors[i]->changeState();
        doors[i]->changeState();
    }
    // Antes de cerrar el archivo y finalizar el programa
    for (uint i = 0; i < doors.size(); i++) {
        delete doors[i]; // Liberar la memoria asignada a cada objeto Door
    }
    // Limpiar el vector
    doors.clear();

    fin.close();
}
