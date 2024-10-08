#include "Pila.h"
#include "NodoPila.h"
using namespace std;

Pila::Pila() { cima = NULL; }
Pila::~Pila() { while (cima != NULL) pop(); }
bool Pila::isEmpty() { return cima == NULL; }

void Pila::push(int v) {
    pnodo nuevo = new NodoPila(v, cima);
    cima = nuevo;
}

void Pila::pop() {
    if (cima != NULL) {
        pnodo nodo = cima;
        cima = cima->siguiente;
        delete nodo;
    }
}

int Pila::top() {
    if (isEmpty()) {
        cout << "Pila vacia" << endl;
    } else {
        cout << "Cima pila: " << cima->valor << endl;
    }
    return 0;
}