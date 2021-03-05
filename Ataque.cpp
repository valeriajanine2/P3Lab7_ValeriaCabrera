#include "Ataque.hpp"

Ataque::Ataque(){
	//constructor vacio
}

Ataque::Ataque(string tipo, string nombre, int poder){
	this->tipo=tipo;
	this->nombre=nombre;
	this->poder=poder;
}

string Ataque::getTipo(){
	return this->tipo;
}

void Ataque::setTipo(string tipo){
	this->tipo=tipo;
}

string Ataque::getNombre(){
	return this->nombre;
}

void Ataque::setNombre(string nombre){
	this->nombre=nombre;
}

int Ataque::getPoder(){
	return this->poder;
}

void Ataque::setPoder(int poder){
	this->poder=poder;
}

