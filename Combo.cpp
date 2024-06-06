#include <iostream>
#include <string>
#include <math.h>
#include "Combo.h"

    Combo::Combo():Producto(){
        clave = 0;
    }

    Combo::Combo(string _nombre, int _precio, int _peso, int _clave):Producto(_nombre, _precio, _peso){
        clave = _clave;
    }
    //Setters y Getters
        void Combo::setClave(int _clave){
            clave = _clave;
        }
        int Combo::getClave(){
            return clave;
        }    
        //Funciones
        string Combo::str(){
            return getNombre() + "-$" + to_string(getPrecio()) + "-" + to_string(getPeso()) + "-$" + to_string(calculaTotalPagar()) + "-" + to_string(clave);
        }
        int Combo::calculaTotalPagar(){
            int descuento = 0;
            int precio = getPrecio() * getPeso() * getClave();
            if (getClave() == 1){
                descuento = (floor(precio / 100))*25;
            }
            else if (getClave() == 2){
                descuento = (floor(precio / 100))*30;
            }
            return precio - descuento;
        }