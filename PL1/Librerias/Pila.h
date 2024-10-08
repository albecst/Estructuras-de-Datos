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
};

#endif // PILA_H