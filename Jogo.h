#include "Baralho.h"
#include "Carta.h"
#include "Jogada.h"
#include "Jogador.h"

#ifndef JOGO_H
#define JOGO_H

class Jogo {
public:
    Jogo();
    virtual ~Jogo();
    
    void preparar(int numeroJogadores);
    void rodar();
    void cortarBaralhoEDistribuirCartas();
    
    Baralho getBaralho() const;
    std::list<Jogador*> getJogadores();    
    
private:
    Baralho baralho;
    std::list<Jogador*> jogadores;
    
    //std::unique_ptr<Jogador> players;
};

#endif /* JOGO_H */

