



#include "duracaoEvento.h"
#include <iostream>

using namespace std;

duracaoEvento::duracaoEvento() {
}

duracaoEvento::duracaoEvento(const duracaoEvento& orig) {
}

duracaoEvento::~duracaoEvento() {
}

void duracaoEvento::lerDados(){
    int segundos;
    
    cout << "Informe a duração do evento em segundos:\n";
    cin >> segundos;
    
    cout << "A duração do evento é: " << this->tempoHoras(segundos) << " horas, " << this->tempoMinutos(segundos) << " minutos e " << this->tempoSegundos(segundos) << " segundos.";
}


int duracaoEvento::tempoHoras(int segundos){
    int calcHoras;
    
    calcHoras = (segundos / 3600);
    return calcHoras;
}


int duracaoEvento::tempoMinutos(int segundos){
    int calcMinutos;
    
    calcMinutos = ((segundos % 3600)/ 60);
    return calcMinutos;
}


int duracaoEvento::tempoSegundos(int segundos){
    int calcSegundos;
    
    calcSegundos = (segundos % 3600)% 60;
    return calcSegundos;
}