#ifndef AGUACATEMON_H
#define AGUACATEMON_H
#include <iostream>
#include <vector>
#include <string>
#include "Nokemon.hpp"
#include "NokemonHierba.hpp"
#include "Ataque.hpp"

using namespace std;

class AguacateMon : public NokemonHierba{
	public:
		AguacateMon(int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre);
		~AguacateMon();
};

#endif
