#include "coordenadaPol.h"
#include <math.h>

coordenadaPol::coordenadaPol(){
    r = 0;
    t = 0.0;
}

coordenadaPol::coordenadaPol(double _r, double _t){
    r = _r;
    t = _t;
}

double coordenadaPol::getR() const{
    return r;
}

double coordenadaPol::getT() const{
    return t;
}

coordenadaPol coordenadaPol::operator*(const coordenadaPol& v){
    int rAns = this->r * v.getR();
    double tAns = this->t + v.getT();
    coordenadaPol ans(rAns,tAns);
    return ans;
}

coordenadaPol coordenadaPol::operator/(const coordenadaPol& v){
    double rAns = this->r / v.getR();
    double tAns = this->t - v.getT();
    coordenadaPol ans(rAns,tAns);
    return ans;
}

coordenadaRect coordenadaPol::toRect() const {
    double y = r * sin(t);
    double x = r * cos(t);
    coordenadaRect ans(x,y);
    return ans;
}

std::ostream& operator<<(std::ostream& os,const coordenadaPol& v) {
    os << "(" << v.r << "," << v.t << ")";
    return os;
}