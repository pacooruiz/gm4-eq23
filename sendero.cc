#include "sendero.h"

void Sendero::getInfo()
{
    cout<<"ID: "<<id_<<endl;
    cout<<"Dificultad: "<<dificultad_<<endl;
    cout<<"Estado: "<<estado_<<endl;
}

void Sendero::setDificultad(string dificultad)
{
    dificultad_=dificultad;
}

void Sendero::setEstado(string estado)
{
    estado_=estado;
}


void Sendero :: imprimirSendero()
{
	cout << endl << "\t DATOS DEL SENDERO" << endl;
	cout << "ID: " << this->id_ << endl;
	cout << "Dificultad: " << this->dificultad_ << endl;
	cout << "Estado: " << this->estado_<< endl;
	cout << endl;
}