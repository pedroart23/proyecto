//
// Created by pedro on 28/10/2020.
//

#include <iostream>
#include <string>
#include <math.h>
#include "software.h"
using namespace std;

int binario_decimal(int binario){
    int resultado=0;
    for(int i=0; i<5; i++){
        resultado += (binario%10)*pow(2,i);
        binario/=10;
    }
    return resultado;
}

bool sofware(string codigo_binario_ingreso){
    int binario=0;
    int decimal = 0;
    string secuencia[5];

    if (codigo_binario_ingreso.size() != 15)
    {
        cout << "Size\n";
        return false;
    }

    for (int i=0; i < codigo_binario_ingreso.size(); i++){
        switch(codigo_binario_ingreso[i]) {
            case '1': codigo_binario_ingreso[i]='A';
                break;
            case '0': codigo_binario_ingreso[i]='R';
                break;
            default:
                cout << "traductor A y R\n";
                return false;
        }
    }

    for (int i=0; i <5; i++)
    {
        secuencia[i]= codigo_binario_ingreso.substr(i*3,3);

        if (secuencia[i]=="RAR"){
            binario= binario*10 +1;
        }
        else if (secuencia[i]=="ARA"){
            binario= binario*10;
        }
        else { cout << "Agrupamiento\n";return false; }
    }

    decimal=binario_decimal(binario);


    if (decimal <= 1) {cout << "Primero <=1 \n"; return false; }

    else if (decimal == 2) return true;

    else
    {
        for (int i=2; i<decimal; i++)
        {
            if (decimal % i == 0) {cout << "Primero % != 0 \n"; return false; }
        }
        return true;
    }

}