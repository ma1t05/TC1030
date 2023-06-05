#ifndef COORDENADARECT_H
#define COORDENADARECT_H
#include <iostream>
#include "coordenadaPol.h"

class coordenadaPol;

class coordenadaRect {
    private:
        double x;
        double y;
    public:
        coordenadaRect();
        coordenadaRect(double,double);
        double getX() const;
        double getY() const;
        coordenadaRect operator+(const coordenadaRect&);
        coordenadaRect operator-(const coordenadaRect&);
        coordenadaRect operator+(const coordenadaPol&);
};

std::ostream& operator<<(std::ostream&,const coordenadaRect&);

#endif