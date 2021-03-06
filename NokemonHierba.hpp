#ifndef NOKEMONHIERBA_H
#define NOKEMONHIERBA_H
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <ctime>
#include "Nokemon.hpp"
#include "Ataque.hpp"

using namespace std;

class NokemonHierba: public Nokemon{
	public:
		NokemonHierba();
		NokemonHierba( int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre);
		~NokemonHierba();
		virtual void inicializarAtaque();
		
	
};

#endif
