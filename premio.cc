#include "premio.h"

void Premio:: getinfo()
{
	cout << endl << "\t DATOS DEL PREMIO" << endl;
	cout << "Nombre: " << this->nombre_ << endl;
	cout << "Descripcion: " << this->descripcion_ <<  endl;
	cout << "Entidad Emisora: " << this->entidadEmisora_ << endl;
	cout << endl;
}

