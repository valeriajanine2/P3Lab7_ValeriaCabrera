#include "NokemonHielo.hpp"

NokemonHielo::NokemonHielo():Nokemon(){
	
}

NokemonHielo::NokemonHielo(int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre): Nokemon(defensa, ataque, listaAtaques, saludActual, saludMaxima, nivel, nombre){
	
}

NokemonHielo::~NokemonHielo(){
	
}

void NokemonHielo::inicializarAtaque(){
	srand (time(NULL));
	Ataque* a1 = new Ataque("Hielo","Lanza Hielitos", 10);
	Ataque* a2 = new Ataque("Hielo","Aliento de Hielo", 19);
	Ataque* a3 = new Ataque("Hielo","Pista de Hielo", 27);
	Ataque* a4 = new Ataque("Hielo","Rayo Conelador", 31);
	Ataque* a5 = new Ataque("Hielo","Lanza Charamuscas", 49);
	Ataque* a6 = new Ataque("Hielo","Instant Freeze", 53);
	
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