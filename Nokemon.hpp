#ifndef NOKEMON_H
#define NOKEMON_H
#include <iostream>
#include <vector>
#include <string>
#include "Ataque.hpp"

using namespace std;

class Nokemon{
	protected:
		int defensa;
		int ataque;
		vector<Ataque*> listaAtaques;
		int saludActual;
		int saludMaxima;
		int nivel;
		string nombre;
	public:
		Nokemon();
		Nokemon(int,int,vector<Ataque*>,int,int,int,string);
		~Nokemon();
		int getDefensa();
		void setDefensa(int);
		int getAtaque();
		void setAtaque(int);
		int getSaludActual();
		void setSaludActual(int);
		int getSaludMaxima();
		void setSaludMaxima(int);
		int getNivel();
		void setNivel(int);
		string getNombre();
		void setNombre(string);
		vector<Ataque*> getListaAtaques();
		void setListaAtaques(vector<Ataque*>);
		virtual void inicializarAtaque() = 0;
};

#endif