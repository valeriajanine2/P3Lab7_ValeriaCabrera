#ifndef ANAFREMON_H
#define ANAFREMON_H
#include <iostream>
#include <vector>
#include <string>
#include "Nokemon.hpp"
#include "NokemonFuego.hpp"
#include "Ataque.hpp"

using namespace std;

class AnafreMon : public NokemonFuego{
	public:
		AnafreMon();
		AnafreMon(int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre);
		~AnafreMon();
		int getDefensa();
		int getAtaque();
		int getSaludActual();
		int getSaludMaxima();
		int getNivel();
		string getNombre();
		vector<Ataque*> getListaAtaques();
};

#endif
