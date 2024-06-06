#include <stdio.h>
#include <sstream>
#include <fstream>

#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
const int MAX_PROD = 50;
class Pedido {
    private:
        int cantidad;
        Producto* arrPtrProductos[MAX_PROD];
    public:
        Pedido();
        //Funciones
        void leerArchivo(string _nombre);
        void ticketCliente();
};
