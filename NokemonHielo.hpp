#ifndef NOKEMONHIELO_H
#define NOKEMONHIELO_H
#include <iostream>
#include <vector>
#include <string>
#include "Nokemon.hpp"
#include "Ataque.hpp"

using namespace std;

class NokemonHielo:public Nokemon{
	public:
		NokemonHielo(int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre);
		~NokemonHielo();
		virtual void inicializarAtaque();
};

#endif