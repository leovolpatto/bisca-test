#include "Carta.h"

Carta::Carta() {
    this->m_isBisca = false;
    this->naipe = "";
    this->numero = -1;
}

Carta::Carta(int numero, std::string naipe) {
    this->numero = numero;
    this->naipe = naipe;
}

Carta::Carta(const Carta& orig) {
    *this = orig;
}

Carta::~Carta() {
}

std::string Carta::getNaipe() const {
    return this->naipe;
}

int Carta::getNumero() const {
    return this->numero;
}

void Carta::setNaipe(std::string naipe) {
    this->naipe = naipe;
}

void Carta::setNumero(int numero) {
    this->numero = numero;
}

bool Carta::isBisca() const{
    return this->m_isBisca;
}

void Carta::setIsBisca(bool isBisca) {
    this->m_isBisca = isBisca;
}


