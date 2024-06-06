#ifndef Combo_h
#define Combo_h

#include <iostream>
#include <string>
#include <math.h>
#include "Producto.h"

using namespace std;
class Combo : public Producto {
    private:
        int clave;
    public:
        Combo();
        Combo(string _nombre, int _precio, int _peso, int _clave);
    //Setters y Getters
        void setClave(int _clave);
        int getClave();
    //Funciones
        string str();
        int calculaTotalPagar();
};

#endif