#ifndef NODOPILA_H
#define NODOPILA_H
#include <iostream>

class NodoPila {
    private:
        int valor;
        NodoPila *siguiente;
        friend class Pila;

    public:
        NodoPila();
        NodoPila(int v, NodoPila *siguiente = NULL);
        ~NodoPila();
};

typedef NodoPila *pNodoPila;
#endif
