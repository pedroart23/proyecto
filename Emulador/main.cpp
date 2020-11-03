#include <iostream>
#include "botonera.h"
#include "puerta.h"
#include "software.h"
#include "sistema_seguridad.h"
#include <string>

using namespace std;

string selector(int opcion){
    switch (opcion) {
        case 1:return codigo_binario_manual();

        case 2:return codigo_binario_acortado();

        case 3:return codigo_binario();
    }
    return codigo_binario_acortado();
}

int main() {
    string binario="";
    bool confirmacion = true;
    unsigned int n_repeticiones = 0; int opcion=0;
    cout << "Ingrese el numero de repeticiones: "; cin >> n_repeticiones;
    cout << "Selecione el tipo de ingreso \n" ;
    cout << "(1) Ingreso manual\n" ;
    cout << "(2) Ingreso aletorio acortado\n" ;
    cout << "(3) Ingreso aletorio\n" ;
    cout << " - - Ingrese numero de opcion\n" ;
    cin >> opcion;

    for (int i =0; i<n_repeticiones;i++){

        cout << "Informe" << i << endl;
        binario = selector(opcion);

        confirmacion = sofware(binario);
        cout <<binario<< " "<<confirmacion;
        cout << endl;

        activiacion_ingreso(confirmacion);
        activiacion_sistema_seguridad(confirmacion);


        cout << endl;
    }
}
