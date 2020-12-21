#include "sendero.h"

void Sendero::getInfo(){
    cout<<"ID: "<<id_<<endl;
    cout<<"Dificultad: "<<dificultad_<<endl;
    cout<<"Estado: "<<estado_<<endl;
}

void Sendero::setDificultad(string dificultad){
    dificultad_=dificultad;
}

void Sendero::setEstado(string estado){
    estado_=estado;
}