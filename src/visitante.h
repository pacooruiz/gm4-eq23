#ifndef VISITANTE_H
#define VISITANTE_H

#include <iostream>
#include <string.h>

using namespace std;

class Visitante{
    private:
        string nombreYapellidos_, dni_, direccion_, nacimiento_, problemaSalud_;
        int telefono_;

    public:
        Visitante();
        void getInfo();
        void setInfo(string nombreYapellidos, string dni, string direccion, string nacimiento, string problemaSalud, int telefono);
};

#endif