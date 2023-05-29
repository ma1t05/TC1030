#include "persona.h"
#include <iostream>

using namespace std;

persona::persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

string persona::getNombre(){
    return nombre;
}

int persona::getEdad() {
    return edad;
}

string persona::ToString() {
    return "nombre: " + nombre + " edad: " + to_string(edad);
}