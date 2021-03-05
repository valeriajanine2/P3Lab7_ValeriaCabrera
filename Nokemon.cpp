#include "Nokemon.hpp"

Nokemon::Nokemon(){
	//constrcutor vacio
}

Nokemon::Nokemon(int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre){
	this->defensa=defensa;
	this->ataque=ataque;
	this->listaAtaques=listaAtaques;
	this->saludActual=saludActual;
	this->saludMaxima=saludMaxima;
	this->nivel=nivel;
	this->nombre=nombre;
}

Nokemon::~Nokemon(){
	//destruir el objeto
}

int Nokemon::getAtaque(){
	return this->ataque;
}

void Nokemon::setAtaque(int ataque){
	this->ataque=ataque;
}

int Nokemon::getDefensa(){
	return this->defensa;
}

void Nokemon::setDefensa(int defensa){
	this->defensa=defensa;
}

vector<Ataque*> Nokemon::getListaAtaques(){
	return this->listaAtaques;
}

int Nokemon::getSaludActual(){
	return this->saludActual;
}

void Nokemon::setSaludActual(int saludActual){
	this->saludActual=saludActual;
}

int Nokemon::getSaludMaxima(){
	return this->saludMaxima;
}

void Nokemon::setSaludMaxima(int saludMaxina){
	this->saludMaxima=saludMaxima;
}

int Nokemon::getNivel(){
	return this->nivel;
}

void Nokemon::setNivel(int nivel){
	this->nivel=nivel;
}

string Nokemon::getNombre(){
	return this->nombre;
}

void Nokemon::setNombre(string nombre){
	this->nombre=nombre;
}

void Nokemon::setListaAtaques(vector<Ataque*> listaAtaques){
	this->listaAtaques=listaAtaques;
}
