#include <iostream>
#include "NodoPila.h"
#include "Pila.h"
using namespace std;

int main() {
    cout << "Creamos la pila Vacía" << endl;
    Pila p;
    p.top();
    cout << "Apilo 0" << endl;
    p.push(0);
    p.top();
    cout << "Apilo 1" << endl;
    p.push(1);
    p.top();
    cout << "Apilo 2" << endl;
    p.push(2);
    p.top();
    p.count();
    cout << "Desapilo" << endl;
    p.pop();
    p.count();
    p.push(33);
    p.push(44);
    p.push(55);
    p.top();
    p.pop();
    p.count();

    p.top();
    p.pop();
    p.count();

    p.top();
    p.count();

    p.~Pila(); //es innecesario, se va a llamar al destructor al salir de la ejecución
    return 0;
}
