#include "direccion.h"
#include <iostream>

using namespace std;

direccion::direccion() {

}

direccion::direccion (string _nombre,string _ciudad, string _estado, int _codigoPosta) {
    nombre = _nombre;
    ciudad = _ciudad;
    estado = _estado;
    codigoPostal = _codigoPosta;
}

void direccion::capturar() {
    cout << "Introduzca" << endl
    << "nombre: ";
    cin >> nombre;
    cout << "ciudad: ";
    cin >> ciudad;
    cout << "estado: ";
    cin >> estado;
    cout << "C.P.:";
    cin >> codigoPostal;
}

string direccion::getNombre() {
    return nombre;
}

string direccion::getCiudad() {
    return ciudad;
}

string direccion::getEstado() {
    return estado;
}

int direccion::getCP() {
    return codigoPostal;
}