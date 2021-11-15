



#include "calcIdade.h"
#include <iostream>

using namespace std;

calcIdade::calcIdade() {
}

calcIdade::calcIdade(const calcIdade& orig) {
}

calcIdade::~calcIdade() {
}

void calcIdade::lerDados(){
    
    int diasIdade;
    
    cout << "Digite a sua idade em dias:\n";
    cin >> diasIdade;
    
    cout << "A idade é: " << this->idadeAnos(diasIdade) << " anos, " << this->idadeMeses(diasIdade) << " meses e " << this->idadeDias(diasIdade) << " dias.";
}

int calcIdade::idadeAnos(int diasIdade){
    
    int idadeEmAnos;
    
    idadeEmAnos = (diasIdade / 365);
    
    return idadeEmAnos;
}

int calcIdade::idadeMeses(int diasIdade){
    
    int idadeEmMeses;
    
    idadeEmMeses = ((diasIdade % 365)/ 30);
    
    return idadeEmMeses;        
            
}

int calcIdade::idadeDias(int diasIdade){
    
    int idadeEmDias;
    
    idadeEmDias = ((diasIdade % 365)% 30);
    
    return idadeEmDias;
}