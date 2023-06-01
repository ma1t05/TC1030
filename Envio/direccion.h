#ifndef DIRECCION_H
#define DIRECCION_H

#include<string>
using namespace std;

class direccion {
    private:
        string nombre;
        string ciudad;
        string estado;
        int codigoPostal;
    public:
        direccion();
        direccion (string,string, string, int);
        void capturar();
        string getNombre();
        string getCiudad();
        string getEstado();
        int getCP();
};

#endif