#ifndef MONITOR_H
#define MONITOR_H

#include <iostream>
#include <string.h>

using namespace std;

class Monitor{
    private:
        string nombreYapellidos_, dni_, direccion_, correo_, nacimiento_;
        int telefono_;

    public:
        Monitor();
        void getInfo();
        void setInfo(string nombreYapellidos, string dni, string direccion, string correo, string nacimiento, int telefono);
};

#endif
