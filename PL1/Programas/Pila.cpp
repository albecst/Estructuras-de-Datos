#include "Pila.h"
#include "NodoPila.h"
using namespace std;

Pila::Pila() { cima = NULL; }
Pila::~Pila() { while (cima) pop(); }
bool Pila::isEmpty() { return cima == NULL; }

void Pila::push(int v) {
    NodoPila nuevo = new NodoPila(v,
                               cima);
    //comienzo de la pila nevo nodo
    cima = nuevo;
}

void Pila::pop() {
    NodoPila nodo; //puntero aux para manipular el nodo
    if (cima)
        nodo = cima;
    cima = nodo->siguiente;
    delete nodo;
}

int Pila::show() {
    if (esVacia()) {
        cout << "Pila vacia" << endl;
    } else {
        cout << "Cima pila: " << cima->valor << endl;
    }
    return 0;
}
