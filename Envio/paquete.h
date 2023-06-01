#ifndef PAQUETE_H
#define PAQUETE_H

#include "envio.h"

class paquete : public envio {
    int largo;
    int ancho;
    int profundidad;
    double peso;
    double costoXKg;
    public:
        paquete();
        paquete(direccion&, direccion&, int, int, int, double, double);
        double calculaCosto();
};

#endif