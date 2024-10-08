/*
#include <iostream>
#include "../Librerias/Fraccion.h"
#include <stdexcept>
using namespace std;

Fraccion::Fraccion() : num(0), den(1) {}

Fraccion::Fraccion(int x, int y) {
    if (y != 0) {
        num = x;
        den = y;
        Reducir();
    } else {
        num = 0;
        den = 1;
    }
}

Fraccion::~Fraccion() {
    cout << "Se acaba de destruir " << num << "/" << den << endl;
}

void Fraccion::Escribir() {
    cout << num << "/" << den;
}

int Fraccion::GetNum() {
    return num;
}

int Fraccion::GetDen() {
    return den;
}

Fraccion Sumar(Fraccion x, Fraccion y) {
    int auxden = x.GetDen() * y.GetDen();
    int auxnum = (x.GetNum() * y.GetDen()) + (x.GetDen() * y.GetNum());
    Fraccion f(auxnum, auxden);
    return f;
}

Fraccion Restar(Fraccion x, Fraccion y) {
    int auxden = x.GetDen() * y.GetDen();
    int auxnum = (x.GetNum() * y.GetDen()) - (x.GetDen() * y.GetNum());
    Fraccion f(auxnum, auxden);
    return f;
}

Fraccion Multiplicar(Fraccion x, Fraccion y) {
    int auxden = x.GetDen() * y.GetDen();
    int auxnum = x.GetNum() * y.GetNum();
    Fraccion f(auxnum, auxden);
    return f;
}

Fraccion Dividir(Fraccion x, Fraccion y) {
    // Verificamos si el numerador de la segunda fracción es cero
    if (y.GetNum() == 0) {
        throw std::invalid_argument("División por cero no permitida.");
    }

    int auxden = x.GetDen() * y.GetNum();
    int auxnum = x.GetNum() * y.GetDen();
    Fraccion f(auxnum, auxden);
    return f;
}


int main() {
    Fraccion f;
    cout << "Creada la fraccion: f ";
    f.Escribir();
    cout << endl;

    Fraccion f2(4, 6);
    cout << "Creada la fraccion: f2 ";
    f2.Escribir();
    cout << endl;

    Fraccion *f3 = new Fraccion(14, 8);
    cout << "Creada la fraccion: f3 ";
    f3->Escribir();
    cout << endl;

    Fraccion f4(2, 7);
    cout << "Creada la fraccion: f4 ";
    f4.Escribir();
    cout << endl;

    cout << "Vamos a sumar ";
    f2.Escribir();
    cout << " y ";
    f4.Escribir();
    cout << endl;

    f = Sumar(f2, f4);
    cout << "El resultado de la suma es: ";
    f.Escribir();
    cout << endl << endl;

    cout << "Vamos a destruir ";
    f3->Escribir();
    cout << endl;
    delete f3; // Destrucción voluntaria

    return 0;
}
*/