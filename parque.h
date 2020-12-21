#ifndef PARQUE_H
#define PARQUE_H

#include <iostream>
#include <string.h>
#include <list>

#include "monitor.h"
#include "sendero.h"
#include "premio.h"
#include "administrativo.h"
#include "ruta.h"

using namespace std;

class Parque
{
    private:

        string municipio_, provincia_;
        int superficie_;
        list <Monitor> monitor_;
        list <Administrativo> administrativo_;
        list <Sendero> sendero_;
        list <Premio> premio_;
        list <Ruta> ruta_; 

    public:

        Parque();
		void getInfo();
		void getRutas();

		void addRuta();
        void getSenderos();
        void addMonitor();
        void addAdministrativo();

};

#endif