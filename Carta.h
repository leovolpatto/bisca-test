#include "string"
#include <iostream>

#ifndef CARTA_H
#define CARTA_H

class Carta {
public:
    Carta();
    Carta(int numero, std::string naipe = "");
    Carta(const Carta& orig);
    virtual ~Carta();
    
    int getNumero() const;
    void setNumero(int numero);
    std::string getNaipe() const;
    void setNaipe(std::string naipe);
    void setIsBisca(bool isBisca);
    bool isBisca() const;
private:    
    int numero;
    std::string naipe;
    bool m_isBisca;
};

#endif

