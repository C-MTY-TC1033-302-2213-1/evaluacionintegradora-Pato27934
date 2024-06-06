#ifndef Producto_h
#define Producto_h

#include <iostream>
#include <string>
#include <math.h>

using namespace std;
class Producto {
    private:
        string nombre;
        int precio;
        int peso;
    public:
        Producto();
        Producto(string _nombre, int _precio, int _peso);
    //Setters y Getters
        void setNombre(string _nombre);
        void setPrecio(int _precio);
        void setPeso(int _peso);
        string getNombre();
        int getPrecio();
        int getPeso();
    //Funciones
        virtual string str();
        virtual int calculaTotalPagar();
};

#endif