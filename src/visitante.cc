#include "visitante.h"

Visitante::Visitante(){}

void Visitante::getInfo(){
    cout<<"Nombre: "<<nombreYapellidos_<<endl;
    cout<<"DNI: "<<dni_<<endl;
    cout<<"Dirección: "<<direccion_<<endl;
    cout<<"Fecha de nacimiento: "<<nacimiento_<<endl;
    cout<<"Problemas de salud: "<<problemaSalud_<<endl;
    cout<<"Teléfono: "<<telefono_<<endl;
}

void Visitante::setInfo(string nombreYapellidos, string dni, string direccion, string nacimiento, string problemaSalud, int telefono){
    nombreYapellidos_=nombreYapellidos;
    dni_=dni;
    direccion_=direccion;
    nacimiento_=nacimiento;
    problemaSalud_=problemaSalud;
    telefono_=telefono;
}