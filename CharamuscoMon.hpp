#ifndef CHARAMUSCOMON_H
#define CHARAMUSCOMON_H
#include <iostream>
#include <vector>
#include <string>
#include "Nokemon.hpp"
#include "NokemonHielo.hpp"
#include "Ataque.hpp"

using namespace std;

class CharamuscoMon : public NokemonHielo{
	public:
		CharamuscoMon(int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre);
		~CharamuscoMon();
};

#endif
