#ifndef ATAQUE_H
#define ATAQUE_H
#include <iostream>
#include <string>

using namespace std;

class Ataque{
	private:
		string nombre;
		string tipo;
		int poder;
		
	public:
		Ataque();
		Ataque(string,string,int);
		~Ataque();
		string getNombre();
		void setNombre(string);
		string getTipo();
		void setTipo(string);
		int getPoder();
		void setPoder(int);		
};

#endif