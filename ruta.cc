#include "ruta.h"


void Ruta::imprimirRuta()
{
	cout << endl << "\t DATOS DE LA Ruta" << endl;
	cout << "Fecha: " << this->fecha_ << endl;
	cout << "Hora: " << this->hora_ << "h" << endl;
	cout << "Modalidad: " << this->modalidad_ << endl;
	cout << "Duracion: " << this->duracion_ << endl;
	cout << "Distancia: " << this->distancia_ << endl;
	cout << endl;
}


void Ruta::addVisitante(Visitante visitante)
{
    visitantes_.push_back(visitante);
}

void Ruta::deleteVisitante(Visitante visitante)
{
    for (auto i=visitantes_.begin(); visitantes_.end(); i++)
    /*    {
  	if(dnivisitante == dni)
    	{
			borramos el visit.
    	}
    }*/
} 

void Ruta::addSendero(Sendero sendero)
{
    senderos_.push_back(sendero);
}