#ifndef PARQUE_H
#define PARQUE_H

#include <iostream>
#include <string.h>
#include <list>

#include "monitor.h"

using namespace std;

class Parque{
    private:
        string municipio_, provincia_;
        int superficie_;
        list <Monitor>;

    public:
        Parque();
        void addRuta();
        void getInfo();
        void getRutas();
        void getSenderos();

};

#endif