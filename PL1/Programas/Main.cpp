#include <iostream>
#include "../Librerias/NodoPila.h"
#include "../Librerias/Pila.h"
#include "../Librerias/NodoCola.h"
#include "../Librerias/Cola.h"
using namespace std;

int main() {
    Cola c;
    Cola c2;
    Cola c3;
    c.encolar('0');
    c.encolar('1');
    c.encolar('2');
    c.encolar('9');

    c2.encolar('65');
    c2.encolar('451');
    c2.encolar('3653');

    c.mostrarCola();
    c2.mostrarCola();
    c.concatenar(c2);

    c.mostrarCola();

    return 0;
}