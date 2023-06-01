#ifndef ENVIO_H
#define ENVIO_H

#include "direccion.h"
#include<string>
using namespace std;

class envio {
    direccion remitente;
    direccion destinatario;
    double costoStd;
    public:
        envio();
        envio(string,string, string, int,string,string, string, int, double);
        envio(direccion&,direccion&, double);
        virtual double calculaCosto();
        void capturar();
};
#endif