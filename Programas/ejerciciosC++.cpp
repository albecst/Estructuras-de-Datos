#include <iostream>
#include <limits>  // Para usar INT_MAX

/*
using namespace std;


// 1. Función que calcula el total, recuento y media de los números introducidos.
void calcularTotalYMedia() {
    int n;
    int total = 0;
    int recuento = 0;
    double media;

    do {
        cout << "Introduce un número entero distinto a -99" << endl;
        cin >> n;

        if (n != -99) {  // Solo suma si el número no es -99.
            total += n;
            recuento += 1;
        }
    } while (n != -99);

    if (recuento > 0) {
        media = static_cast<double>(total) / recuento;  // Conversión a double para obtener decimales.
        cout << "El total ha sido: " << total << ", y se han introducido: " << recuento << " números." << endl;
        cout << "La media de estos números es: " << media << endl;
    } else {
        cout << "No se han introducido números válidos." << endl;
    }
}

// 2. Reescribir el programa para que termine al leerse 10 enteros, o al pulsar -99.
void calcularTotalYMedia10MAX() {
    int n;
    int total = 0;
    int recuento = 0;
    double media;

    do {
        cout << "Introduce un número entero distinto a -99" << endl;
        cin >> n;

        if (n != -99) {  // Solo suma si el número no es -99.
            total += n;
            recuento += 1;
            cout << "Llevas " << recuento << " numeros" << endl;
        }
    } while (n != -99 && recuento < 10);

    if (recuento > 0) {
        media = static_cast<double>(total) / recuento;  // Conversión a double para obtener decimales.
        cout << "El total ha sido: " << total << ", y se han introducido: " << recuento << " números." << endl;
        cout << "La media de estos números es: " << media << endl;
    } else {
        cout << "No se han introducido números válidos." << endl;
    }
}

//3. Escribir un programa que lea letras del alfabeto castellano, y termine cuando se hayan leído.
//a) 10 válidas.
void diezValidas() {
    unsigned char validasMIN[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 164, 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    unsigned char validasMAY[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 165, 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int recuento = 0;
    char caracter;
bucle:
    while (recuento < 10) {
        cout << "Introduce un carácter del alfabeto español" << endl;
        cin >> caracter;
        for (int i = 0; i < 26; i++) {
            if (caracter == validasMIN[i] || caracter == validasMAY[i]) {
                cout << "El carácter " << caracter << " es válido."<<endl;
                recuento += 1;
                cout << "Llevas " << recuento << " caracteres."<<endl;

                i = 0;
                goto bucle;;
            }

        }
        cout << "No es válido ese carácter..., introduzca otro por favor" << endl;
    }
}


//Otra forma sin el goto (con un "bool esValido")
#include <iostream>
using namespace std;

void diezValidasDOS() { //TODO: Ver por qué con la ñ no va
    unsigned char validasMIN[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 164, 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    unsigned char validasMAY[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 165, 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int recuento = 0;
    char caracter;

    while (recuento < 10) {
        cout << "Introduce un carácter del alfabeto español: ";
        cin >> caracter;

        bool esValido = false;
        // Comprobar si el carácter está en el array de minúsculas o mayúsculas
        for (int i = 0; i < 27; i++) {
            if (caracter == validasMIN[i] || caracter == validasMAY[i]) {
                esValido = true;
                break; // Si lo encuentras, no necesitas seguir buscando
            }
        }

        if (esValido) {
            cout << "El carácter " << caracter << " es válido." << endl;
            recuento += 1;
            cout << "Llevas " << recuento << " caracteres válidos." << endl;
        } else {
            cout << "No es válido ese carácter, por favor introduce otro." << endl;
        }
    }
}

//b) 10 en total. //TODO: Ver por qué con la ñ no va
void diezTotal() {
    unsigned char validasMIN[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 164, 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    unsigned char validasMAY[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 165, 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int recuento = 0;
    char caracter;

    while (recuento < 10) {
        cout << "Introduce un carácter del alfabeto español: ";
        cin >> caracter;

        bool esValido = false;
        // Comprobar si el carácter está en el array de minúsculas o mayúsculas
        for (int i = 0; i < 27; i++) {
            if (caracter == validasMIN[i] || caracter == validasMAY[i]) {
                esValido = true;
                break; // Si lo encuentras, no necesitas seguir buscando
            }
        }

        if (esValido) {
            cout << "El carácter " << caracter << " es válido." << endl;
            recuento += 1;
            cout << "Has introducido " << recuento << " caracteres." << endl;
        } else {
            cout << "No es válido ese carácter, por favor introduce otro." << endl;
            recuento += 1;
            cout << "Has introducido " << recuento << " caracteres." << endl;
        }
    }
}

//4 y 6. Escribir un programa que escriba en pantalla la tabla de multiplicar de un entero entre 1 y 10 leído de teclado.
void tablaMultiplicar() {
int n;
    cout << "Introduce un número entero y podrás ver su tabla de multiplicar" << endl;
    cin >> n;
for (int i = 1; i <= 10;i++) {
    cout << n << " * "<< i << " = " << n*i << endl;
}
}

//5. Escribir un programa que escriba en pantalla todas las tablas de multiplicar (del 1 al 10)
void tablaMultiplicarEntera() {
    for (int i = 1; i <= 10;i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " * "<< j << " = " << i*j << "\t";
        }
        cout << endl;
    }
}

//7. Escribir un programa que lee dos enteros e1 y e2 de teclado y llama a las siguientes funciones
//a) Función que calcula su producto sin usar la función multiplicar
//b) Función que calcula el resultado de elevar e1 a e2.
//c) Función que calcular el cuadrado de un número. Se llamará para calcular el cuadrado de ambos enteros.

//a) Sin usar multiplicar
int multiplicar(int a, int b) {
    int resultado = a;
    for (int i = 1; i < b; i++) {
        resultado += a;
    }
    return resultado;
}

//b) Sin elevar
int elevar(int a, int b) {
    int resultado = a;
    for (int i = 1; i < b; i++) {
        resultado *= a;
    }
    return resultado;
}

//c) Sin hacer el cuadrado
void cuadrado() {
    int a = 2, b = 5;
    cout << "El cuadrado de " << a << " es " << elevar(a, 2) << endl;
    cout << "El cuadrado de " << b << " es " << elevar(b, 2) << endl;

}

//8. Escribir un programa que utilice funciones para:
//a) Leer un vector de 10 enteros.
//b) Visualizar en pantalla el vector leído.
//c) Encontrar el máximo y el mínimo del vector.
//d) Visualizar los datos del vector en orden.

//a), b)
void leerArray(int array[10]) {
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
}

//c)
void arrayMaxMin(int array[10]){
    int maximo = 0, minimo = 2147483647;
    for (int i = 0; i < 10; i++) {
        if (array[i] > maximo) {
            maximo = array[i];
        }
        else if (array[i] < minimo) {
            minimo = array[i];
        }
    }
    cout << "El maximo es " << maximo << endl;
    cout << "El minimo es " << minimo << endl;
}

//d
void datosEnOrden(int array[10]) {
    int minimo = 100000000;
    int posicion = 0, aux = 0;
    for (int i = 0; i < 10; i++) {
        aux = array[i];
        for (int j = i; j < 10; j++) {
            if (array[j] < minimo) {
                minimo = array[j];
                posicion = j;

            }
        }
        array[i] = minimo;
        array[posicion] = aux;
        minimo = 100000000;
    }

    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
}

//9. Escribir un programa que genere aleatoriamente tantos enteros entre 0 y 100 como desee el usuario y los ordene de menor a mayor, visualizando los datos antes y después de ordenarlos.
void randoms() {

}



int main() {
    int array[10] = {1,2,3,4,5,6,7,9,-4,192};
   datosEnOrden(array);
    return 0;
}


*/