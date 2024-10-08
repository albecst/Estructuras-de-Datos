/*
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

struct Estudiante {
  string nombre;
  string DNI;
  float nota;
};

void lee_estudiantes(Estudiante estudiantes[], int cuantos) {
  for (int i = 0; i<cuantos;i++) {
    cout << "Introduce el nombre del estudiante" << endl;
    getline(cin, estudiantes[i].nombre);

    cout << "Introduce su DNI" << endl;
    cin >> estudiantes[i].DNI;

    cout << "Introduce su nota" << endl;
    cin >> estudiantes[i].nota;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

  }
  for (int i = 0; i<cuantos;i++) {
    cout << "Los datos del estudiante en la posicion " << i << " son:" << estudiantes[i].nombre << " " << estudiantes[i].DNI << " " << estudiantes[i].nota <<endl;
  }
}

int main() {
  int cuantos = 2;
  Estudiante estudiante[cuantos];
  lee_estudiantes(estudiante, cuantos);
  return 0;
}
*/