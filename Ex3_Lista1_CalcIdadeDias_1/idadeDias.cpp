



#include "idadeDias.h"
#include <iostream>

using namespace std;

idadeDias::idadeDias() {
}

idadeDias::idadeDias(const idadeDias& orig) {
}

idadeDias::~idadeDias() {
}

void idadeDias::lerDados(){
    int anos, meses, dias;
    
    cout << "Digite a sua idade em anos:\n";
    cin >> anos;
    cout << "Digite a sua idade em meses:\n";
    cin >> meses;
    cout << "Digite a sua idade em dias:\n";
    cin >> dias;
    
    cout << this->calcIdadeDias(anos, meses, dias);
    
}

int idadeDias::calcIdadeDias(int anos, int meses, int dias){
    int idadeEmDias;
    
    idadeEmDias = (anos*365) + (meses*30) + (dias); 
    
    return idadeEmDias;
    
}

