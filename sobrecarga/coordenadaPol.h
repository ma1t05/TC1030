#ifndef COORDENADAPOL_H
#define COORDENADAPOL_H

#include <iostream>

class coordenadaPol {
    private:
        double r;
        double t;
    public:
        coordenadaPol();
        coordenadaPol(double, double);
        double getR() const;
        double getT() const;
        coordenadaPol operator*(const coordenadaPol&);
        coordenadaPol operator/(const coordenadaPol&);
        friend std::ostream& operator<<(std::ostream&,const coordenadaPol&);
};

std::ostream& operator<<(std::ostream&,const coordenadaPol&);

#endif