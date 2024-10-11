#include <iostream>
#include "../Librerias/NodoPila.h"
#include "../Librerias/Pila.h"
using namespace std;

int main() {
    cout << "Creamos la pila Vacía" << endl;
    Pila p;
    Pila p2;
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

    p.fondo();

    p.top();
    p.pop();
    p.count();

    p.top();
    p.count();

    p.pop();
    p.pop();
    p.pop();
    p.pop();
    p.pop();
    p.pop();
    p.count();

    cout << endl;

    p2.push(1);
    p2.push(2);
    p2.push(3);
    p2.count();

    cout << endl;

    p.push(40);
    p2.top();
    p2.fondo();

    p2.invertir();

    p2.top();
    p2.fondo();

    p.montar(p2);
    cout << endl;

    p.top();
    p.fondo();


    p.~Pila(); //es innecesario, se va a llamar al destructor al salir de la ejecución
    return 0;
}
