#include "Baralho.h"

Baralho::Baralho() {
    this->inicializar();
    this->embaralhar();
}

Baralho::~Baralho() {
}

Carta* Baralho::pescar() {
    Carta* c = this->baralho.front();
    this->baralho.pop_front();
    
    return c;
}

int Baralho::qtdeCartasRestantes() {
    return this->baralho.size();
}

void Baralho::embaralhar() {
     std::srand(static_cast<unsigned>(time(0))); 

     std::vector<Carta*> v(this->baralho.begin(), this->baralho.end()); 
     std::random_shuffle(v.begin(), v.end()); 
     this->baralho.assign(v.begin(), v.end()); 

     //for(auto i = baralho.begin(); i!=baralho.end(); ++i) 
     //    std::cout << i->getNumero() << ' ';
}

void Baralho::inicializar() {
    this->cartasPescadas = 0;
    
    std::vector<int> numeros;
    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(3);
    numeros.push_back(4);
    numeros.push_back(5);
    numeros.push_back(6);
    numeros.push_back(7);
    numeros.push_back(10);
    numeros.push_back(11);
    numeros.push_back(12);
    
    std::vector<int>::iterator ptr;
    for(ptr = numeros.begin(); ptr != numeros.end(); ptr++)
    {
        Carta* cOuro = new Carta;
        cOuro->setNaipe("Ouro");
        cOuro->setNumero(*ptr);
        this->baralho.push_back(cOuro);
        
        Carta* cEspada = new Carta;
        cEspada->setNaipe("Espada");
        cEspada->setNumero(*ptr);
        this->baralho.push_back(cEspada);
        
        Carta* cCopa = new Carta;
        cCopa->setNaipe("Copa");
        cCopa->setNumero(*ptr);
        this->baralho.push_back(cCopa);
        
        Carta* cPaus = new Carta;
        cPaus->setNaipe("Paus");
        cPaus->setNumero(*ptr);
        this->baralho.push_back(cPaus);          
    }
    this->tamanho = this->baralho.size();
}

void Baralho::testes() {
    
    std::cout << "zerando tudo" << std::endl;
    std::list<Carta*> outras = this->baralho;
    for (std::list<Carta*>::iterator it = outras.begin(); it != outras.end(); it++) {
        Carta* a = *it;
        
        std::cout << "zerando " << std::addressof(a) << " - " << a->getNaipe() << "-" << a->getNumero() << std::endl;        
        a->setNumero(0);
    }
    
}
