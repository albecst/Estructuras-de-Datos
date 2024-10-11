#include "../Librerias/Pila.h"
#include "../Librerias/NodoPila.h"
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

//1)
int Pila::count() {
    int cantidad = 0;
    pnodo nodo = cima;
    while (nodo != NULL) {
        cantidad++;
        nodo = nodo->siguiente;
    }
    cout << "Cantidad de elementos en la pila: " << cantidad << endl;
    return cantidad;
}

//2)
void Pila::fondo() {
    pnodo nodo = cima;
    if (nodo == NULL) {
        cout << "Pila vacia" << endl;
    } else {
        while (nodo->siguiente != NULL) {
            nodo = nodo->siguiente;
        }
        cout << "Fondo pila: " << nodo->valor << endl;
    }
}

//3)
void Pila::montar(Pila p2) {
    p2.invertir();
    pnodo nodo2 = p2.cima;
    while (nodo2 != NULL) {
        push(nodo2->valor);
        nodo2 = nodo2->siguiente;
    }
    while (!p2.isEmpty()) {
        p2.pop();
    }
}


//4)
void Pila::quitar() {

}

//5)
void Pila::invertir() {
    Pila p2,p3;
    while (!isEmpty()) {
        p2.push(cima->valor);
        pop();
    }
    while(!p2.isEmpty()) {
        p3.push(p2.cima->valor);
        p2.pop();
    }
    while(!p3.isEmpty()) {
        push(p3.cima->valor);
        p3.pop();
    }
 }