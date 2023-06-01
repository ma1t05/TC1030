#include "sobre.h"

sobre::sobre() {

}

sobre::sobre(direccion& dirR, direccion& dirD,double _costoStd,
 int _largo, int _ancho, double _cargoAdicional)
: envio(dirR,dirD, _costoStd) {
    largo = _largo;
    ancho = _ancho;
    cargoAdicional = _cargoAdicional;
}

double sobre::calculaCosto() {
    return 0.0;// ToDo
}