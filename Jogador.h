#include "Carta.h"
#include "Baralho.h"
#include "Jogada.h"

#ifndef JOGADOR_H
#define JOGADOR_H

class Jogador {
public:
    Jogador(std::string nome);
    virtual ~Jogador();
    
    void pescar(Baralho& baralho);
    void receberCarta(Carta* carta);
    Carta jogar(Jogada& jogada);
    std::string getNome() const;
    
    void testar();
private:
    std::string nome;
    std::list<Carta*> cartas;
};

#endif /* JOGADOR_H */

