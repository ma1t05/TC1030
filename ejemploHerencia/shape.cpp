#include "shape.h"

shape::shape(){
    x = 0;
    y = 0;
}

shape::shape(int valx,int valy){
    x = valx;
    y = valy;
}

std::string shape::draw(){
    return "soy una figura";
}

int shape::GetValueX(){
    return x;
}

int shape::GetValueY(){
    return y;
}