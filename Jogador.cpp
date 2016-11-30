#include "Jogador.h"

Jogador::Jogador(std::string nome) {
    this->nome = nome;
    //this->cartas = std::list<Carta*>();
}

Jogador::~Jogador() {
}

std::string Jogador::getNome() const {
    return this->nome;
}

Carta Jogador::jogar(Jogada& jogada) {
    
}

void Jogador::pescar(Baralho& baralho) {
    Carta* c = baralho.pescar();
    this->receberCarta(c);
}

void Jogador::receberCarta(Carta* carta) {
    this->cartas.push_back(carta);
    
    std::cout << "recebeu " << std::addressof(carta) << " - " << carta->getNaipe() << " - " << carta->getNumero() << std::endl;
}

void Jogador::testar() {
    std::cout << this->nome << "-------------" << std::endl;
    
    std::list<Carta*> cartas = this->cartas;
    for (std::list<Carta*>::iterator it = cartas.begin(); it != cartas.end(); it++) {
        Carta* a = *it;
        std::cout << std::addressof(a) << " - " << a->getNaipe() << " - " << a->getNumero() << std::endl;
    }
}
