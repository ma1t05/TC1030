#include "coordenadaRect.h"
#include <iostream>

using namespace std;

coordenadaRect::coordenadaRect(){
    x= y = 0;
}

coordenadaRect::coordenadaRect(int _x,int _y){
    x = _x;
    y = _y;
}

int coordenadaRect::getX() const{
    return x;
}

int coordenadaRect::getY() const{
    return y;
}

coordenadaRect coordenadaRect::operator+(const coordenadaRect& v){
    coordenadaRect ans(this->x + v.getX(), this->y + v.getY());
    return ans;
}

coordenadaRect coordenadaRect::operator-(const coordenadaRect& v){
    coordenadaRect ans(this->x - v.getX(), this->y - v.getY());
    return ans;
}

ostream& operator<<(ostream& os,const coordenadaRect& v) {
    os << "(" << v.getX() << "," << v.getY() << ")";
    return os;
}