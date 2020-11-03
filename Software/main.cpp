#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int binario_decimal(int binario){
    int resultado=0;
    for(int i=0; i<5; i++){
        resultado += (binario%10)*pow(2,i);
        binario/=10;
    }
    return resultado;
}


bool software(string codigo_binario_ingreso){
  int binario=0;
  int decimal = 0;
  string secuencia[5]; 

  if (codigo_binario_ingreso.size() != 15)
    {
      return false;
    }
    
  // 0001001-> ARA
  for (int i=0; i < codigo_binario_ingreso.size(); i++){
        switch(codigo_binario_ingreso[i]) {
            case '1': codigo_binario_ingreso[i]='A';
                break;
            case '0': codigo_binario_ingreso[i]='R';
                break;
            default: return false;
        }
    }
  //ararararararararar -> {ara,rar,ara,rar,ara} 
  for (int i=0; i <5; i++)
    {  
      secuencia[i]= codigo_binario_ingreso.substr(i*3,3);

      if (secuencia[i]=="RAR"){
        binario= binario*10 +1;
      }
      else if (secuencia[i]=="ARA"){
        binario= binario*10;
      }
      else { return false; }
    }

  decimal = binario_decimal(binario);
  
  // primos
  if (decimal <= 1) return false;

  else if (decimal == 2) return true;

  else
    {
    for (int i=2; i<decimal; i++)
      {
        if (decimal % i == 0) return false;
      }
    return true;
    }

  return false;
}

int main() {
  cout << software("101101101010010");
}
