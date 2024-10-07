#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

class Fraccion {
public:
    Fraccion();
    Fraccion(int x, int y);
    ~Fraccion(); // Destructor: se ejecuta cuando se destruye un objeto (aunque en este caso no se libera memoria dinámica).
    void Escribir();
    int GetNum();
    int GetDen();

private:
    int num, den;
    int MCD(int a, int b) {
        int aux;
        while (a % b != 0) {
            aux = a % b;
            a = b;
            b = aux;
        }
        return b;
    }
    void Reducir() {
        int aux = MCD(abs(num), abs(den));
        num /= aux;
        den /= aux;
        if (den < 0) {
            num = -num;
            den = -den;
        }
    }
};

#endif // FRACCION_H