#ifndef COLA_H
#define COLA_H
#include "NodoCola.h"
class Cola
{
private:
    NodoCola * primero;
    NodoCola * ultimo;
    int longitud;
public:
    Cola(); ~Cola();
    void encolar(char);
    char inicio();
    char fin();
    char desencolar();
    bool es_vacia();
    void mostrarCola(); //No es correcto, se implementa para ver que está creada correctamente
    int get_longitud();
    void invertir();
    void iguales(Cola c);
    void simetrica();
    void concatenar(Cola c);
    void mezclar_alternativamente(Cola c, Cola resultado);
    void quitar_primera_mitad();
};
#endif // COLA_H