#ifndef PILA_H
#define PILA_H
#include "NodoPila.h"

class Pila {
private:
    pnodo cima; // cima should be a pointer to NodoPila

public:
    Pila();
    ~Pila();

    bool isEmpty();
    void push(int v);
    void pop();
    int top();
    int count();
    void fondo();
    void montar(Pila pila);
    void quitar();
    void invertir();
};

#endif // PILA_H