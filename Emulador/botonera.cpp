//
// Created by pedro on 28/10/2020.
//
#include <iostream>
#include "botonera.h"
#include <cstdlib>
#include <string>
using namespace std;

int randint(int n) {

    return rand() % n;
}

string codigo_binario(){
    string codigo;
    int numero=0;
    int limite = randint(20);
    for (int i=0; i<limite; i++){
        numero=randint(3);
        if (numero==0){
            codigo +="0";
        }
        else{
            codigo +="1";
        }
    }
    return codigo;
}

string codigo_binario_acortado(){
    string codigo;
    int numero=0;

    for (int i=0; i<5; i++){
        numero=randint(3);
        if (numero==0){
            codigo +="101";
        }
        else if (numero==1){
            codigo +="010";
        }
        else{
            codigo +="000";
        }
    }
    return codigo;
}

string codigo_binario_manual(){
    string codigo_binario_ingreso;
    cout << "(1) Ingrese clave: " ;
    cin >> codigo_binario_ingreso;
    for (int i=0; i < codigo_binario_ingreso.size(); i++){
        switch(toupper(codigo_binario_ingreso[i])) {
            case 'A': codigo_binario_ingreso[i]='1';
                break;
            case 'R': codigo_binario_ingreso[i]='0';
                break;
            default: codigo_binario_ingreso[i]='2';
        }
    }
    return codigo_binario_ingreso;
}