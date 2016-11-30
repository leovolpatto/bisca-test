#ifndef JOGADA_H
#define JOGADA_H

#include "Carta.h"


class Jogada {
public:
    Jogada();
    //Jogada(const Jogada& orig);
    virtual ~Jogada();
    
    void adicionarCarta(Carta& carda);
    
    
private:
    
};

#endif /* JOGADA_H */

