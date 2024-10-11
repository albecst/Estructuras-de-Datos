#include "../Librerias/Pila.h"
#include "../Librerias/NodoPila.h"
using namespace std;

Pila::Pila() { cima = NULL; }
Pila::~Pila() { while (cima != NULL) pop(); }
bool Pila::isEmpty() { return cima == NULL; }

void Pila::push(int v) {
    pnodo nuevo = new NodoPila(v, cima);
    cima = nuevo;
}

void Pila::pop() {
    if (cima != NULL) {
        pnodo nodo = cima;
        cima = cima->siguiente;
        delete nodo;
    }
}

int Pila::top() {
    if (isEmpty()) {
        cout << "Pila vacia" << endl;
    } else {
        cout << "Cima pila: " << cima->valor << endl;
    }
    return 0;
}

//1)
int Pila::count() {
    int cantidad = 0;
    pnodo nodo = cima;
    while (nodo != NULL) {
        cantidad++;
        nodo = nodo->siguiente;
    }
    cout << "Cantidad de elementos en la pila: " << cantidad << endl;
    return cantidad;
}

//2)
void Pila::fondo() {
    pnodo nodo = cima;
    if (nodo == NULL) {
        cout << "Pila vacia" << endl;
    } else {
        while (nodo->siguiente != NULL) {
            nodo = nodo->siguiente;
        }
        cout << "Fondo pila: " << nodo->valor << endl;
    }
}

//3)
void Pila::montar(Pila p2) {
    p2.invertir();
    pnodo nodo2 = p2.cima;
    while (nodo2 != NULL) {
        push(nodo2->valor);
        nodo2 = nodo2->siguiente;
    }
    while (!p2.isEmpty()) {
        p2.pop();
    }
}

//4)
void Pila::quitar(int n) {
    int cantidad = 0;
    while (cantidad != n) {
        pop();
        cantidad++;
    }
}

//5)
void Pila::invertir() {
    Pila p2,p3;
    while (!isEmpty()) {
        p2.push(cima->valor);
        pop();
    }
    while(!p2.isEmpty()) {
        p3.push(p2.cima->valor);
        p2.pop();
    }
    while(!p3.isEmpty()) {
        push(p3.cima->valor);
        p3.pop();
    }
 }

//6)
void Pila::menor_a_mayor() {
    if (isEmpty()) {
        cout << "La pila está vacía" << endl;
        return;
    }

    Pila p2;  // Pila auxiliar para almacenar temporalmente los valores
    bool ordenada = true;

    // Guardamos el primer elemento (cima) de la pila original
    int valorAnterior = cima->valor;
    p2.push(valorAnterior);  // Agregamos el primer elemento a la pila auxiliar
    pop();  // Sacamos el primer elemento de la pila original

    // Recorremos la pila original
    while (!isEmpty()) {
        int valorActual = cima->valor;  // Obtenemos el valor actual
        pop();  // Sacamos el elemento de la pila original

        // Comparamos el valor actual con el anterior
        if (valorActual < valorAnterior) {
            ordenada = false;  // Si encontramos un valor menor, no está ordenada
        }

        p2.push(valorAnterior);  // Guardamos el valor anterior en la pila auxiliar
        valorAnterior = valorActual;  // Actualizamos el valor anterior
    }

    // Guardamos el último valor comparado en la pila auxiliar
    p2.push(valorAnterior);

    // Restauramos los elementos en la pila original
    while (!p2.isEmpty()) {
        push(p2.cima->valor);
        p2.pop();
    }
    pop();

    // Resultado final
    if (ordenada) {
        cout << "La pila está ordenada de menor a mayor" << endl;
    } else {
        cout << "La pila no está ordenada de menor a mayor" << endl;
    }
}

//Extra
void Pila::imprimirTodos() {
    if (isEmpty()) {
        cout << "La pila está vacía" << endl;
        return;
    }

    Pila p2;  // Pila auxiliar para hacer la copia
    pnodo aux = cima;

    // Pasamos los elementos a la pila auxiliar y los imprimimos
    while (aux != NULL) {
        cout << aux->valor << endl;  // Imprimimos el valor actual
        p2.push(aux->valor);  // Guardamos los elementos en p2
        aux = aux->siguiente;  // Nos movemos al siguiente nodo
    }

    // Restauramos los elementos a la pila original
    while (!p2.isEmpty()) {
        push(p2.cima->valor);
        p2.pop();
    }
}


