//
// Created by utec on 12/11/19.
//

#include "persona.h"
persona::persona(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}

persona::persona(){};
//setter --> agregamos al atributo
void persona::setNombre(string nombre){
    this->nombre = nombre;
}

void persona::setEdad(int edad){
    this->edad = edad;
}
//getter --> retornamos al atributo
string persona::getNombre(){
    return nombre;
}

int persona::getEdad(){
    return edad;
}

void persona::mostrarPersona(){
    cout << "El nombre de esta persona es " << nombre << " y su edad es " << edad << endl;
}
