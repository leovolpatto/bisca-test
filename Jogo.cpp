#include "Jogo.h"

Jogo::Jogo() {
    //this->jogadores = std::list<Jogador*>();
    
}

Jogo::~Jogo() {
}

void Jogo::preparar(int numeroJogadores) {
    for(int i = 0; i < numeroJogadores; i++){
        Jogador* jogador = new Jogador("Jogador " + std::to_string(i + 1));
        this->jogadores.push_back(jogador);
    }
}

void Jogo::rodar() {
    
    std::cout << "Iniciando a bagaça";
    
    while(this->baralho.qtdeCartasRestantes() > 0){
        //Carta * c = this->baralho.pescar();
        
        Jogada jogada;
        
        std::list<Jogador*> jogadores = this->jogadores;
        for (std::list<Jogador*>::iterator it = jogadores.begin(); it != jogadores.end(); it++) {
            Jogador* a = *it;
            a->receberCarta(this->baralho.pescar());
            a->jogar(jogada);
        }        
        
        //std::cout << "pescou " << c->getNaipe() << " - " << c->getNumero() << std::endl;
    }
    
    std::cout << "Terminou o jogóbio";
    
}

Baralho Jogo::getBaralho() const {
    return this->baralho;
}

std::list<Jogador*> Jogo::getJogadores() {
    return this->jogadores;
}

void Jogo::cortarBaralhoEDistribuirCartas() {
    std::list<Jogador*> jogadores = this->jogadores;
    for (std::list<Jogador*>::iterator it = jogadores.begin(); it != jogadores.end(); it++) {
        Jogador* a = *it;
        
        for(int i = 0; i < 3; i++){
            Carta* carta = this->baralho.pescar();
            
            a->receberCarta(carta);
        }
        
    }
    
    this->baralho.testes();
   
    for (std::list<Jogador*>::iterator it = jogadores.begin(); it != jogadores.end(); it++) {
        Jogador* a = *it;
        a->testar();
    }    
}