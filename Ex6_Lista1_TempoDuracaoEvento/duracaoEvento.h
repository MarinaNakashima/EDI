



#ifndef DURACAOEVENTO_H
#define DURACAOEVENTO_H

class duracaoEvento {
public:
    duracaoEvento();
    duracaoEvento(const duracaoEvento& orig);
    virtual ~duracaoEvento();
    
    void lerDados();
    int tempoHoras(int segundos);
    int tempoMinutos(int segundos);
    int tempoSegundos(int segundos);
    
private:

};

#endif /* DURACAOEVENTO_H */

