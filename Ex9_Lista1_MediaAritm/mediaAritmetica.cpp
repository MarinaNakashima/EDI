



#include "mediaAritmetica.h"
#include <iostream>

using namespace std;

mediaAritmetica::mediaAritmetica() {
}

mediaAritmetica::mediaAritmetica(const mediaAritmetica& orig) {
}

mediaAritmetica::~mediaAritmetica() {
}

void mediaAritmetica::lerDados(){
    
    double n1, n2, n3;
    
    cout << "Informe a primeira nota:\n";
    cin >> n1;
    cout << "Informe a segunda nota:\n";
    cin >> n2;
    cout << "Informe a terceira nota:\n";
    cin >> n3;
   
    if (this->media(n1, n2, n3) >= 6){
        cout << "APROVADO com a média: " << this->media(n1, n2, n3);  
    }
    
    if (this->media(n1, n2, n3) < 6){
        cout << "REPROVADO com a média: " << this->media(n1, n2, n3);
    }

}

double mediaAritmetica::media(double n1, double n2, double n3){
    
    double mediaAritm;
    
    mediaAritm = (n1 + n2 + n3) / 3;
    
    return mediaAritm;
   
}





