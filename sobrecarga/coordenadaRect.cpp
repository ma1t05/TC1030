#include "coordenadaRect.h"
#include <iostream>

using namespace std;

coordenadaRect::coordenadaRect(){
    x= y = 0;
}

coordenadaRect::coordenadaRect(double x,double _y){
    this->x = x;
    y = _y;
}

double coordenadaRect::getX() const{
    return x;
}

double coordenadaRect::getY() const{
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

coordenadaRect coordenadaRect::operator+(const coordenadaPol& vP){
    coordenadaRect vR = vP.toRect();
    coordenadaRect ans = *this + vR;
    return ans;
}

ostream& operator<<(ostream& os,const coordenadaRect& v) {
    os << "(" << v.getX() << "," << v.getY() << ")";
    return os;
}