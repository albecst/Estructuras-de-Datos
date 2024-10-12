#include <iostream>
#include "../Librerias/NodoPila.h"
#include "../Librerias/Pila.h"
#include "../Librerias/NodoCola.h"
#include "../Librerias/Cola.h"
using namespace std;

int main() {
    Cola c;
    Cola c2;
    Cola resultado;
    c.encolar('0');
    c.encolar('1');
    c.encolar('2');
    c.encolar('9');

    c2.encolar('65');
    c2.encolar('451');
    c2.encolar('3653');

    c.mostrarCola();
    c2.mostrarCola();
    resultado.mezclar_alternativamente(c, c2);
    resultado.mostrarCola();

    resultado.quitar_primera_mitad();
    resultado.mostrarCola();

    return 0;
}