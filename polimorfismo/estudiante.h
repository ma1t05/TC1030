#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"
#include <string>

using namespace std;

class estudiante : public persona {
    private:
        string carrera;
    public:
        estudiante(string,int,string);
        string getCarrera();
        string ToString();
};

#endif /* estudiante.h */