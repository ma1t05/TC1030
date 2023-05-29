#include "persona.h"
#include "estudiante.h"
#include <iostream>

using namespace std;

int main() {
    persona* ptrP;
    persona persona1("Juan", 18);
    estudiante *ptrE, estudiante1("Carlos", 19, "Ing.");
    ptrP = &persona1;
    ptrE = &estudiante1;
    cout << "ptrP: " << ptrP << "\t&ptrP: " << &ptrP << endl;
    cout << "ptrE: " << ptrE << "\t&ptrE: " << &ptrE << endl;
    cout << ptrP->ToString() << endl;
    cout << ptrE->ToString() << endl;
    ptrP = ptrE;
    cout << "Se asgino ptrP = ptrE;" << endl;
    cout << "ptrP: " << ptrP << "\t&ptrP: " << &ptrP << endl;
    cout << "ptrE: " << ptrE << "\t&ptrE: " << &ptrE << endl;
    cout << ptrP->ToString() << endl;
    cout << ptrE->ToString() << endl;
    
    return 0;
}