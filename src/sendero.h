#ifndef SENDERO_H
#define SENDERO_H

#include <iostream>
#include <string.h>

using namespace std;

class Sendero{
    private:
        int id_;
        string dificultad_, estado_;

    public:
        Sendero();
        void getInfo();
        void setEstado(string estado);
        void setDificultad(string dificultad);
};

#endif
