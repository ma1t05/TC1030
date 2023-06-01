#include "paquete.h"

paquete::paquete() {

}

paquete::paquete(direccion& dirR, direccion& dirD, double _costoSTD, int _largo,
 int _ancho, int _profundidad, double _peso, double _costoXKg)
 : envio(dirR, dirD, _costoSTD) {
    largo = _largo;
    ancho = _ancho;
    profundidad = _profundidad;
    peso = _peso;
    costoXKg = _costoXKg;
}

double paquete::calculaCosto() {
    return 0.0; // ToDo
}