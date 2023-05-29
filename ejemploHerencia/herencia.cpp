#include "rectangle.h"
#include <iostream>

using namespace std;

int main() {
    rectangle r(1,2,3,4);
    shape *ptr = &r;
    rectangle *rct = &r;
    cout << ptr->draw() << " con x: " << ptr->GetValueX() << " con y: " << ptr->GetValueY() << endl;
    return 0;
}