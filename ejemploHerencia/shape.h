#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class shape {
    private:
        int x;
        int y;
    public:
        shape();
        shape(int,int);
        virtual std::string draw();
        int GetValueX();
        int GetValueY();
};

#endif