#ifndef COORDENADARECT_H
#define COORDENADARECT_H
#include <iostream>

class coordenadaRect {
    private:
        int x;
        int y;
    public:
        coordenadaRect();
        coordenadaRect(int,int);
        int getX() const;
        int getY() const;
        coordenadaRect operator+(const coordenadaRect&);
};

std::ostream& operator<<(std::ostream&,const coordenadaRect&);

#endif