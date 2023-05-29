#include "rectangle.h"

rectangle::rectangle(){
    b = 0;
    h = 0;
}

rectangle::rectangle(int _x,int _y,int base,int height) : shape(_x,_y){
    b = base;
    h = height;
}

int rectangle::GetValB(){
    return b;
}

int rectangle::GetValH(){
    return h;
}

int rectangle::area(){
    return b*h;
}

std::string rectangle::draw(){
    return "soy un rectangulo y " + shape::draw();
}