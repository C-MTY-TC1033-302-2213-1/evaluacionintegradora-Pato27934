#ifndef Verdura_h
#define Verdura_h

#include <iostream>
#include <string>
#include <math.h>
#include "Producto.h"

using namespace std;
class Verdura : public Producto {
    private:
        string temporada;
    public:
        Verdura();
        Verdura(string _nombre, int _precio, int _peso, string _temporada);
    //Setters y Getters
        void setTemporada(string _temporada);
        string getTemporada();
    //Funciones
        string str();
        int calculaTotalPagar();
};

#endif