#include <iostream>
#include "coordenadaRect.h"

using namespace std;

int main() {
    coordenadaRect r1(1,2);
    coordenadaRect r2(3,2);
    coordenadaRect r3,r4;

    r3 = r1 + r2;
    r4 = r1 + r2 + r3 + r2 +r1;

    cout << "(" << r3.getX() << "," << r3.getY() << ")" << endl;
    cout << r4 << endl;

    return 0;
}
