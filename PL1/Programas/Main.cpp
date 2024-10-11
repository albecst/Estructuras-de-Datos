#include <iostream>
#include "../Librerias/NodoPila.h"
#include "../Librerias/Pila.h"
#include "../Librerias/NodoCola.h"
#include "../Librerias/Cola.h"
using namespace std;

int main()
{ cout << "Creamos la cola Vacía" << endl;
    Cola c; c.mostrarCola();
    cout << "Encolo 0" << endl;
    c.encolar('0'); c.mostrarCola();;
    cout << "Encolo 1" << endl;
    c.encolar('1'); c.mostrarCola();;
    cout << "Encolo 2" << endl;
    c.encolar('2'); c.mostrarCola();
    cout << "Primero" << c.inicio()<<endl;
    cout << "Ultimo" << c.fin()<<endl;
    cout << "Longitud Cola: " << c.get_longitud()<<endl;
    cout << "Desencolo" << endl;
    c.desencolar(); c.mostrarCola();
    cout << "Longitud Cola: " << c.get_longitud()<<endl;
    c.~Cola();
    return 0;
}