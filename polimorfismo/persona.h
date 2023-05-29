#ifndef PERSONA_H
#define PERSONA_H
#include <string>

class persona {
    private:
        std::string nombre;
        int edad;
    public:
        persona(std::string,int);
        std::string getNombre();
        int getEdad();
        virtual std::string ToString();
};

#endif