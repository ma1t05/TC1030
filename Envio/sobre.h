#ifndef SOBRE_H
#define SOBRE_H

#include "envio.h"

class sobre : public envio {
    int largo;
    int ancho;
    double cargoAdicional;
    public:
        sobre();
        sobre(direccion&, direccion&, int, int, double);
        double calculaCosto();
};

#endif