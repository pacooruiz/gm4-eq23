#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H

#include <iostream>
#include <string.h>

using namespace std;

class Administrativo{
    private:
        string nombreYapellidos_, dni_, direccion_, correo_, nacimiento_;
        int telefono_;

    public:
        Administrativo();
        void getInfo();
        void setInfo(string nombreYapellidos, string dni, string direccion, string correo, string nacimiento, int telefono);
};

#endif