#include "parque.h"

void Parque::getInfo()
{
    cout<<"El parque se encuentra situado en la localidad de "<<municipio_<<", perteneciente a la provincia de "<<provincia_<<" y cuenta con una extensión de "<<superficie_<<"Km cuadrados."<<endl;
}


void getRutas()
{
	cout << "La lista de rutas es:" << endl;
	list<Ruta>::iterator it;
	for(it=this->ruta_.begin(); it != this->ruta_.end(); it++)
	{
		(*it).imprimirRuta();
				
	}
	cout << endl;


	void getSenderos()
{
	cout << "La lista de senderos es:" << endl;
	list<Sendero>::iterator it;
	for(it=this->sendero_.begin(); it != this->sendero_.end(); it++)
	{
		(*it).imprimirSendero();
				
	}
	cout << endl;


}