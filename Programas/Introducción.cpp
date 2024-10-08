/*
#include <iostream>
#include <string>
using namespace std;

// Definimos la clase base Persona
class Persona {
protected:
    // Los atributos 'nombre' y 'edad' son protegidos, lo que significa que las clases hijas pueden acceder a ellos.
    // Si fueran 'private', no podrían ser accedidos directamente desde las clases derivadas.
    // Si estuviese en público, podríamos hacer p.nombre y nos devolvería el nombre, pero al ser privado necesitamos métodos.
    string nombre;
    int edad;

public:
    // Constructor
    Persona(string nombre, int edad) {
        this->nombre = nombre; // Usamos 'this' para distinguir entre el atributo y el parámetro.
        this->edad = edad;
    }

    // Método virtual para mostrar los datos. Se declara 'virtual' para permitir que las clases derivadas lo sobrescriban (polimorfismo).
    virtual void mostrarDatos() {
        cout << "Nombre: " << nombre << endl; // Muestra el nombre.
        cout << "Edad: " << edad << endl; // Muestra la edad.
    }

    // Método para incrementar la edad.
    void cumpleaños() {
        edad++; // Incrementa la edad en uno.
    }

    // Getters y Setters para acceder y modificar los atributos.
    string getNombre() {
        return nombre; // Devuelve el nombre.
    }

    void setNombre(string nombre) {
        this->nombre = nombre; // Establece el nombre.
    }

    int getEdad() {
        return edad; // Devuelve la edad.
    }

    void setEdad(int edad) {
        this->edad = edad; // Establece la edad.
    }
};

class Profesor : public Persona {
    //Ponemos public Persona para que la herencia sea pública, y que Profesor pueda acceder a los métodos de Persona.
private:
    // Atributos específicos de la clase Profesor
    string materia; // Materia que enseña el profesor.
    int clases; // Número de clases que imparte.

public:
    // Constructor de la clase Profesor, que llama al constructor de la clase base Persona.
    Profesor(string nombre, int edad, string materia, int clases) : Persona(nombre, edad) {
        this->materia = materia; // Inicializa la materia.
        this->clases = clases; // Inicializa el número de clases.
    }

    // Sobreescribimos el método mostrarDatos para incluir la información específica del profesor.
    void mostrarDatos() override {
        cout << "Nombre: " << nombre << endl; // Muestra el nombre heredado.
        cout << "Edad: " << edad << endl; // Muestra la edad heredada.
        cout << "Materia: " << materia << endl; // Muestra la materia.
        cout << "Clases: " << clases << endl; // Muestra el número de clases.
        cout << endl;
    }
};

/*
 * PROBLEMÓN
 * Imaginemos que creamos un array de profesores en el que están prof1 y prof2.
 * Luego cambiamos los datos de prof1, pero al recorrer el array, los datos de prof1 no se han actualizado.
 * Si queremos cambiar algo de algún objeto, si hacemos objeto.setEdad(20), la edad no cambiará, ya que se modificará el objeto en sí, y no la copia que guardamos en el array.
 * Para cambiar algo de un objeto y que SIEMPRE funcione, necesitamos pasar un puntero a la función, y modificar el objeto a través de ese puntero.
*/
/*

int main() {
    Persona p1("Juan", 20);
    Persona p2("Sofia", 25);

    // Creación de objetos Profesor.
    Profesor prof1("Jose", 20, "Matematicas", 5);
    Profesor prof2("Sofia", 25, "Lengua", 4);

    // Uso de punteros para evitar "slicing" y permitir polimorfismo.
    // Slicing: Ocurre cuando se asigna un objeto de una clase derivada a una clase base, resultando en la pérdida de información de la clase derivada.
    // Evitar Slicing: Utilizar punteros o referencias a clases base permite mantener la información de las clases derivadas y facilita el polimorfismo.
    Persona *personas[] = {&p1, &p2}; // Arreglo de punteros a Persona.
    Profesor *profesores[] = {&prof1, &prof2}; // Arreglo de punteros a Profesor.

    // Recorremos el array de personas y mostramos sus datos.
    for (Persona *persona: personas) {
        persona->mostrarDatos(); // Llamada polimórfica, se usa '->' para acceder a métodos de punteros.
    }
    cout << endl;

    prof1.setEdad(38); // Actualizamos la edad de prof1.

    // Recorremos el arreglo de profesores y mostramos sus datos.
    for (Profesor* profesor : profesores) {
        profesor->mostrarDatos(); // Muestra los datos de cada profesor, incluyendo los cambios.
    }






    // Prueba con arrays sin punteros //
    prof1.mostrarDatos();
    Profesor profesoress[] = {prof1, prof2};;
    prof1.setEdad(38);
    prof1.mostrarDatos();

    cout << endl;

    for (Profesor profesor: profesoress) {
        profesor.mostrarDatos();
    }

    //Efectivamente, dentro del array se guarda una copia de prof1 que no se modifica, pero fuera del array en verdad prof1 sí se modifica.


    return 0; // Fin del programa.
}

*/
