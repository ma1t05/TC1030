#include "envio.h"
#include <iostream>

using namespace std;

envio::envio() {

}

envio::envio(string rN,string rC, string rE, int rCP,string dN,string dC, string dE, int dCP, double _costoSTD) 
: remitente(rN,rC,rE,rCP) , destinatario(dN,dC,dE,dCP) {
    costoStd = _costoSTD;
}
envio::envio(direccion& dirRemitente,direccion& dirDestinatario, double _costoSTD)
 : remitente(dirRemitente) , destinatario(dirDestinatario) {
    costoStd = _costoSTD;
}

double envio::calculaCosto(){
    return 0.0;
}

void envio::capturar() {
    cout << "Captura remitente ";
    remitente.capturar();
    cout << "Captura destinatario ";
    destinatario.capturar();
    cout << "Costo STD: ";
    cin >> costoStd;
}