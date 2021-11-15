



#ifndef IDADEDIAS_H
#define IDADEDIAS_H

class idadeDias {
public:
    idadeDias();
    idadeDias(const idadeDias& orig);
    virtual ~idadeDias();
    
    void lerDados();
    int calcIdadeDias(int anos, int meses, int dias);
private:

};

#endif /* IDADEDIAS_H */

