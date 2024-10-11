#include "../Librerias/NodoPila.h"

NodoPila::NodoPila() { //Constructor vacío
    valor = 0;
    siguiente = NULL;
}

NodoPila::NodoPila(int elemento, pnodo sig) { //Constructor con un valor y el siguiente
    valor = elemento;
    siguiente = sig;
}

NodoPila::~NodoPila() { //Destructor (no hace mucho realmente)
}
