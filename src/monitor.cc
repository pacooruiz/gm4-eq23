#include "monitor.h"

void Monitor::getInfo(){
    cout<<"Nombre: "<<nombreYapellidos_<<endl;
    cout<<"DNI: "<<dni_<<endl;
    cout<<"Dirección: "<<direccion_<<endl;
    cout<<"Correo electrónico: "<<correo_<<endl;
    cout<<"Fecha de nacimiento: "<<nacimiento_<<endl;
    cout<<"Teléfono: "<<telefono_<<endl;
}

void Monitor::setInfo(string nombreYapellidos, string dni, string direccion, string correo, string nacimiento, int telefono){
    nombreYapellidos_=nombreYapellidos;
    dni_=dni;
    direccion_=direccion;
    correo_=correo;
    nacimiento_=nacimiento;
    telefono_=telefono;
}