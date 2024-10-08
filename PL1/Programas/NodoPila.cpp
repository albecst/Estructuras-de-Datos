#include "NodoPila.h"

NodoPila::NodoPila() { //Constructor vacío
    valor = 0;
    siguiente = NULL;
}

NodoPila::NodoPila(int elemento, NodoPila *siguiente) { //Constructor con un valor y el siguiente
    valor = elemento;
    siguiente = siguiente;
}

NodoPila::~NodoPila() { //Destructor (no hace mucho realmente)
}
