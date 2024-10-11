#include <iostream>
#include "../Librerias/NodoPila.h"
#include "../Librerias/Pila.h"
using namespace std;

int main() {
    Pila p;

    // Agregamos algunos elementos a la pila
    p.push(3);
    p.push(2);
    p.push(1);
    p.push(222);

    // Comprobamos si la pila está ordenada
    p.menor_a_mayor();

    // Agregamos más elementos y los imprimimos
    p.imprimirTodos();

    return 0;
}
