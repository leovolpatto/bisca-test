#include <cstdlib>
#include <iostream>
#include <list>
#include <fstream>
#include <algorithm>
#include "Carta.h"
#include "Jogada.h"
#include "Baralho.h"
#include "Jogo.h"

using namespace std;

int main(int argc, char** argv) {
    
    /*
    std::list<Carta*> cartas;
    for(int i = 0; i<3; i++){
        Carta* c = new Carta;
        c->setNaipe("nada");
        c->setNumero(i);
        cartas.push_back(c);
    }
    
    
    std::cout << "Alterando" << endl;
    std::list<Carta*> outras = cartas;
    for (std::list<Carta*>::iterator it = outras.begin(); it != outras.end(); it++) {
        Carta* a = *it;
        a->setNumero(0);
    }
    for (std::list<Carta*>::iterator it = outras.begin(); it != outras.end(); it++) {
        Carta* a = *it;
        std::cout << a->getNumero() << endl;
    }
    
    
    std::cout << "Original" << endl;
    for (std::list<Carta*>::iterator it = cartas.begin(); it != cartas.end(); it++) {
        Carta* a = *it;
        std::cout << a->getNumero() << endl;
    }

    return 0;
    */
    
    
    
    Jogo jogo = Jogo();
    jogo.preparar(4);
    
    jogo.cortarBaralhoEDistribuirCartas();
    
    jogo.rodar();
    
    
    
    /*
    Baralho b = Baralho();
    Baralho *a = &b;
    
    b.embaralhar();
    
    while(b.qtdeCartasRestantes() > 0){
        auto carta = b.pescar();
        std::cout << carta.getNumero() << " - " << carta.getNaipe() << endl;
    }
    */
    
    /*
    Jogada jog = Jogada();
    
    Carta cartobia = b.pescar();
    jog.adicionarCarta(cartobia);
    
    if(cartobia.isBisca()){
        std::cout << "Eh biscao" << endl;
    }else{
        std::cout << "Nao Eh biscao? " << endl;
    }
    
    std::cout << "Total:" << a->qtdeCartasRestantes() << endl;
    b.pescar();
    std::cout << "Total:" << a->qtdeCartasRestantes() << endl;
    b.pescar();
    std::cout << "Total:" << a->qtdeCartasRestantes() << endl;
    
    
    std::list<Carta> baralho;
    baralho.push_back(Carta(1));
    baralho.push_back(Carta(2));
    baralho.push_back(Carta(3));
    baralho.push_back(Carta(4));
    baralho.push_back(Carta(5));
    baralho.push_back(Carta(6));
    std::cout << "Total:" << baralho.size() << endl;
 
    std::cout << "=============================" << endl << "Baralho:" << baralho.size() << endl;
    for (std::list<Carta>::iterator it = baralho.begin(); it != baralho.end(); it++) {
        Carta a = *it;
        std::cout << a.getNumero() << endl;
    }
    
    Baralho bar;
    bar.embaralhar();
    std::cout << "o baralho tem " << bar.qtdeCartasRestantes();
    
    
     // seed the RNG 
     std::srand(static_cast<unsigned>(time(0))); 

     // shuffle 
     std::vector<Carta> v(baralho.begin(), baralho.end()); 
     random_shuffle(v.begin(), v.end()); 
     baralho.assign(v.begin(), v.end()); 

     // output 
     for(auto i = baralho.begin(); i!=baralho.end(); ++i) 
         std::cout << i->getNumero() << ' ';
    */
    
    
    
    
    /*
    std::cout << "Digite quantas pessoas serão criadas:" << endl;
    std::cin >> pessoas;
    std::cout << "caramba";
    */
    
    
    
    //std::cin.ignore();
    
    return 0;
}

