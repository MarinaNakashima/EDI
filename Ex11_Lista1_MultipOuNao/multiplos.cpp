



#include "multiplos.h"
#include <iostream>

using namespace std;

multiplos::multiplos() {
}

multiplos::multiplos(const multiplos& orig) {
}

multiplos::~multiplos() {
}

void multiplos::lerDados(){
    int num1, num2;
    
    cout << "Digite o primeiro número:\n";
    cin >> num1;
    cout << "Digite o segundo número (menor que o anterior):\n";
    cin >> num2;
    
    if (this->verifMultiplo(num1, num2) == 0){
        cout << "São múltiplos";
    }
    
    if (this->verifMultiplo(num1, num2) != 0){
        cout << "Não são múltiplos";
    }
    
}

int multiplos::verifMultiplo(int num1, int num2){
    int calculo;
    
    calculo = (num1 % num2);
    return calculo;        
}

