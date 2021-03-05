#include "NokemonHierba.hpp"

NokemonHierba::NokemonHierba():Nokemon(){
	
}

NokemonHierba::NokemonHierba(int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre): Nokemon(defensa, ataque, listaAtaques, saludActual, saludMaxima, nivel, nombre){
	
}

NokemonHierba::~NokemonHierba(){
	
}

void NokemonHierba::inicializarAtaque(){
	srand (time(NULL));
	Ataque* a1 = new Ataque("Hierba","Sintesis", 10);
	Ataque* a2 = new Ataque("Hierba","Patada Tropical", 20);
	Ataque* a3 = new Ataque("Hierba","Hoja Navaja", 28);
	Ataque* a4 = new Ataque("Hierba", "Ciclon de Hojas", 35);
	Ataque* a5 = new Ataque("Hierba","Energibola", 42);
	Ataque* a6 = new Ataque("Hierba","Megaton Floral", 60);
	
	vector<Ataque*> ataques;
	ataques.push_back(a1);
	ataques.push_back(a2);
	ataques.push_back(a3);
	ataques.push_back(a4);
	ataques.push_back(a5);
	ataques.push_back(a6);
	
	//dos numero random y luego agregar esos dos index a la listaAtaques
	int r,r1;
	
	r = 0+rand()%5;
	r1 = 0+rand()%5;
	
	Ataque* attack = ataques.at(r);
	Ataque* attack1 = ataques.at(r1);
	
	this->getListaAtaques().push_back(attack);
	this->getListaAtaques().push_back(attack1);
	
}