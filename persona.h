//
// Created by utec on 12/11/19.
//

#ifndef MENTO_PERSONA_H
#define MENTO_PERSONA_H

#include <iostream>
#include <string>

using std::string; using std::cout; using std::endl; using std::cin;

class persona{
private:
    string nombre;
    int edad;
public:
    persona(string, int);
    persona();
    void setNombre(string);
    void setEdad(int);
    string getNombre();
    int getEdad();
    void mostrarPersona();
    ~persona(){};
};

#endif //MENTO_PERSONA_H
