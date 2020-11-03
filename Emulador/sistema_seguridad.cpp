//
// Created by pedro on 28/10/2020.
//

#include <iostream>
#include "sistema_seguridad.h"
using namespace std;

void activiacion_sistema_seguridad(bool mensaje){
    if (!(mensaje)){
        cout << "Activacion del sistema anti-intrusos"<< endl;
        cout << "Cierre de compuertas"<< endl;
        cout << "Apertura de la poso con caimanes"<< endl;
    }
}