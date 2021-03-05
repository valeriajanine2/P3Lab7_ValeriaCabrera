#ifndef NOKEMON_H
#define NOKEMON_H
#include <iostream>
#include <vector>

class Nokemon{
	int defensa;
	int ataque;
	vector<Ataque*> listaAtaques;
	int saludActual;
	int saludMaxima;
	int nivel;
};

#endif