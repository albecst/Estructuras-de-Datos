#include <iostream>
#include "../Librerias/NodoPila.h"
#include "../Librerias/Pila.h"
#include "../Librerias/NodoCola.h"
#include "../Librerias/Cola.h"
using namespace std;

int main() {
    Cola c;
    Cola c2;
    c.encolar('0');
    c.encolar('1');
    c.encolar('2');
    c.encolar('9');
    c.mostrarCola();

    c2.encolar('0');
    c2.encolar('1');
    c2.encolar('2');
    c2.encolar('9');
    c2.mostrarCola();

    c2.iguales(c);


    c.~Cola();
    return 0;
}
