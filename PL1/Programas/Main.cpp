#include <iostream>
#include "../Librerias/NodoPila.h"
#include "../Librerias/Pila.h"
#include "../Librerias/NodoCola.h"
#include "../Librerias/Cola.h"
using namespace std;

int main() {
    Cola c;
    c.mostrarCola();
    c.encolar('0');
    c.mostrarCola();;
    c.encolar('1');
    c.mostrarCola();;
    c.encolar('2');
    c.mostrarCola();
    c.encolar('9');
    c.mostrarCola();
    c.invertir();
    c.mostrarCola();
    c.~Cola();
    return 0;
}
