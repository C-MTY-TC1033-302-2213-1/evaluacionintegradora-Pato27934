#include <iostream>
#include <string>
#include <math.h>
#include "Verdura.h"

    Verdura::Verdura():Producto(){
        temporada = "Invierno";
    }

    Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada):Producto(_nombre, _precio, _peso){
        temporada = _temporada;
    }
    //Setters y Getters
        void Verdura::setTemporada(string _temporada){
            temporada = _temporada;
        }
        string Verdura::getTemporada(){
            return temporada;
        }    
        //Funciones
        string Verdura::str(){
            return getNombre() + "-$" + to_string(getPrecio()) + "-" + to_string(getPeso()) + "-$" + to_string(calculaTotalPagar()) + "-" + temporada;
        }
        int Verdura::calculaTotalPagar(){
            if (getTemporada() == "Junio"){
                return getPrecio() * getPeso() * 2;
            }
            else if (getTemporada() == "Regalado"){
                return getPrecio() * getPeso() * 3;
            }
            else {
                return getPrecio() * getPeso() * 10;
            }
        }