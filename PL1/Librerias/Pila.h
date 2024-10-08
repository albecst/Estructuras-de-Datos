#ifndef PILA_H
#define PILA_H
#include "NodoPila.h"
class Pila
{
private:
    NodoPila cima;
public:
    Pila();
    ~Pila();

    bool isEmpty();
    void push(int v);
    void pop();
    int show();
};
#endif // PILA_H