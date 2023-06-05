#include <iostream>
#include "coordenadaRect.h"
#include "coordenadaPol.h"

using namespace std;

int main() {
    coordenadaRect r1(1,2);
    coordenadaRect r2(3,2);
    coordenadaRect r3,r4;
    coordenadaPol p1(1, 45);
    coordenadaPol p2(5, 30);
    coordenadaPol p3, p4;

    r3 = r1 + r2;
    r4 = r1 + r2 + r3 + r2 +r1;

    cout << "(" << r3.getX() << "," << r3.getY() << ")" << endl;
    cout << r4 << endl;

    cout << "Coordenadas Polares" << endl;
    p3 = p1 * p2;
    p4 = p1 / p2;
    cout << p3 << endl;
    cout << p4 << endl;

    r4 = r1 + p2;
    cout << endl << "Coordenada Rec + Pol"<< endl;
    cout << r4 << endl;

    return 0;
}
