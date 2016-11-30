#include "Carta.h"
#include "string"
#include <list>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "vector"


#ifndef BARALHO_H
#define BARALHO_H

class Baralho {
public:
    Baralho();
    virtual ~Baralho();
    int qtdeCartasRestantes();
    Carta* pescar();
    void embaralhar();
    void inicializar();
    
    void testes();
    
private:
    int tamanho = 40;
    int cartasPescadas = 0;
    std::list<Carta*> baralho;
};

#endif

