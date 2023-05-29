#ifndef RECTANGLE_H
#define RECTANGE_H
#include  "shape.h"

class rectangle : public shape {
    private:
        int b;
        int h;
    public:
        rectangle();
        rectangle(int,int,int,int);
        int GetValB();
        int GetValH();
        int area();
        std::string draw() override;
};

#endif