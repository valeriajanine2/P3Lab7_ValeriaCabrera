#include "NokemonFuego.hpp"

NokemonFuego::NokemonFuego(int defensa, int ataque, vector<Ataque*> listaAtaques, int saludActual, int saludMaxima, int nivel, string nombre):Nokemon(defensa,ataque,listaAtaques,saludActual,saludMaxima,nivel,nombre){
	
}

NokemonFuego::~NokemonFuego(){
	
}

void NokemonFuego::inicializarAtaque(){
	Ataque* a1 = new Ataque("Fuego","Chispitas", 12);
	Ataque* a2 = new Ataque("Fuego","Aceite Caliente", 18);
	Ataque* a3 = new Ataque("Fuego","Llamas a mi", 35);
	Ataque* a4 = new Ataque("Fuego", "Bola de Fuego", 28);
	Ataque* a5 = new Ataque("Fuego","Aliento de Fuego", 46);
	Ataque* a6 = new Ataque("Fuego","Rayos Laser", 58);
	
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
