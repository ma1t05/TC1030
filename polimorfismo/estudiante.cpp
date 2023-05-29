#include "estudiante.h"
#include <iostream>

using namespace std;

estudiante::estudiante(string nombre,int edad, string _carrera)
 : persona(nombre,edad) {
    carrera = _carrera;
}

string estudiante::getCarrera() {
    return carrera;
}

string estudiante::ToString() {
    return persona::ToString() + " carrera: " + carrera;
}