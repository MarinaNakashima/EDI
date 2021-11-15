



#ifndef CALCIDADE_H
#define CALCIDADE_H

class calcIdade {
public:
    calcIdade();
    calcIdade(const calcIdade& orig);
    virtual ~calcIdade();
    
    void lerDados();
    int idadeAnos(int diasIdade);
    int idadeMeses(int diasIdade);
    int idadeDias(int diasIdade);
private:

};

#endif /* CALCIDADE_H */

