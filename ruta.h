#ifndef RUTA_H
#define RUTA_H

#include <iostream>
#include <string.h>
#include <list>

#include "visitante.h"
#include "sendero.h"

using namespace std;

class Ruta
{
    private:

        string modalidad_, fecha_, hora_;
        int duracion_, distancia_;
        list <Visitante> visitantes_;
        list <Sendero> senderos_;

    public:

        Ruta();
        void imprimirRuta();
        void addVisitante(Visitante visitante);
        void deleteVisitante(Visitante visitante);
        void addSendero(Sendero sendero);
};

#endif