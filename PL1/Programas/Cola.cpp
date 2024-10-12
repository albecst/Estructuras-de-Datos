#include <iostream>
#include "../Librerias/NodoCola.h"
#include "../Librerias/Cola.h"
using namespace std;

Cola::Cola() {
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

Cola::~Cola() {
}

void Cola::encolar(char elemento) {
    NodoCola *nuevo_nodo = new
            NodoCola(elemento);
    if (es_vacia()) {
        primero = nuevo_nodo;
        ultimo = nuevo_nodo;
    } else {
        ultimo->siguiente = nuevo_nodo;
        ultimo = nuevo_nodo;
    }
    longitud++;
}

char Cola::desencolar() {
    if (!es_vacia()) {
        char elemento = primero->elemento;
        NodoCola *aux = primero;
        if ((primero == ultimo) && (primero->siguiente == NULL)) {
            primero = NULL;
            ultimo = NULL;
            aux->siguiente = NULL;
            delete(aux);
        } else {
            primero = primero->siguiente;
            aux->siguiente = NULL;
            delete(aux);
        }
        longitud--;
        return elemento;
    }
}

char Cola::inicio() {
    if (!es_vacia()) {
        return primero->elemento;
    }
}

char Cola::fin() {
    if (!es_vacia()) {
        return ultimo->elemento;
    }
}

int Cola::get_longitud() {
    return longitud;
}

bool Cola::es_vacia() {
    return ((primero == NULL) && (ultimo ==
                                  NULL));
}

void Cola::mostrarCola() {
    NodoCola *aux = primero;
    if (es_vacia()) { cout << "Cola Vacía: " << endl; } else {
        cout << "Datos de la Cola: " << endl;
        while (aux) {
            cout << aux->elemento << endl;
            aux = aux->siguiente;
        }
    }
}

//1)
void Cola::invertir() {
    Cola c2;
    Cola c3;
    while (!es_vacia()) {
        c2.encolar(desencolar());
    }
    while (!c2.es_vacia()) {
        char ultimo = c2.desencolar();
        while (!c2.es_vacia()) {
            c3.encolar(ultimo);
            ultimo = c2.desencolar();
        }
        encolar(ultimo);
        while (!c3.es_vacia()) {
            c2.encolar(c3.desencolar());
        }
    }
}

//2)
void Cola::iguales(Cola c) {
    Cola c2;
    Cola c3;
    bool iguales = true;
    while (!es_vacia() && !c.es_vacia()) {
        if (inicio() == c.inicio()) {
            c2.encolar(desencolar());
            c3.encolar(c.desencolar());
        } else {
            iguales = false;
            break;
        }
    }
    if (iguales) {
        cout << "Las colas son iguales" << endl;
    } else {
        cout << "Las colas no son iguales" << endl;
    }
    while (!c2.es_vacia()) {
        encolar(c2.desencolar());
    }
    while (!c3.es_vacia()) {
        c.encolar(c3.desencolar());
    }
}

//3)
//void Cola::simetrica() {

//4)
void Cola::concatenar(Cola c2) {
    while (!c2.es_vacia()) {
        encolar(c2.desencolar());
    }
}

//5)
void Cola::mezclar_alternativamente(Cola c1, Cola c2) {
    while (!c1.es_vacia() && !c2.es_vacia()) {
        encolar(c1.desencolar());
        encolar(c2.desencolar());
    }
    while (!c1.es_vacia()) {
        encolar(c1.desencolar());
    }
    while (!c2.es_vacia()) {
        encolar(c2.desencolar());
    }
}

void Cola::quitar_primera_mitad() {
    int mitad = longitud / 2;
    for (int i = 0; i < mitad; i++) {
        desencolar();
    }
}






