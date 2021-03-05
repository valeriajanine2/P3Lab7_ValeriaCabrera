#ifndef NOKEMONFUEGO_H
#define NOKEMONFUEGO_H
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <ctime>
#include "Nokemon.hpp"
#include "Ataque.hpp"

using namespace std;

class NokemonFuego:public Nokemon{
	public:
		NokemonFuego();
		NokemonFuego(int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre);
		~NokemonFuego();
		virtual void inicializarAtaque();
		
	
};

#endif