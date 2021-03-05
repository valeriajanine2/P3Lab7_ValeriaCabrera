#include "SimuladorBatalla.hpp"

SimuladorBatalla::SimuladorBatalla(){
	//constructor vacio
}

SimuladorBatalla::~SimuladorBatalla(){
	
}

Nokemon* SimuladorBatalla::simularBatalla(Nokemon* nokemon1, Nokemon* nokemon2){
	srand (time(NULL));
	Nokemon* ganador;
	
	cout<<"Comenzando la batalla...."<<nokemon1->getNombre()<<" vs. "<<nokemon2->getNombre()<<endl;
	
	string tipo;
	if(nokemon1->getNombre()=="AnafreMon"){
		tipo="Fuego";
	}else if(nokemon1->getNombre()=="AguacateMon"){
		tipo:"Hierba";
	}else{
		tipo="Hielo";
	}
	
	if(nokemon2->getNombre()=="AnafreMon"){
		tipo="Fuego";
	}else if(nokemon2->getNombre()=="AguacateMon"){
		tipo="Hierba";
	}else{
		tipo="Hielo";
	}
	
	cout<<nokemon1->getNombre()<<" - "<<tipo<<": "<<endl;
	cout<<"	Defensa: "<<nokemon1->getAtaque()<<"\n	Ataque: "<<nokemon1->getDefensa()<<"\n	Salud Actual: "<<nokemon1->getSaludActual()<<"\n	Salud Maxima: "<<nokemon1->getSaludMaxima()<<"\n	Nivel: "<<nokemon1->getNivel()<<endl;
	cout<<nokemon2->getNombre()<<" - "<<tipo<<": "<<endl;
	cout<<"	Defensa: "<<nokemon2->getAtaque()<<"\n	Ataque: "<<nokemon2->getDefensa()<<"\n	Salud Actual: "<<nokemon2->getSaludActual()<<"\n	Salud Maxima: "<<nokemon2->getSaludMaxima()<<"\n	Nivel: "<<nokemon2->getNivel()<<endl;
	
	bool conVida=true;
	int vida1=nokemon1->getSaludMaxima(),vida2=nokemon2->getSaludMaxima();
	int aux,aux2;
	
	while(conVida){
		//ataque del primer nokemon
		int rand1;
		rand1 = 0+rand()%1;
		Ataque* a1 = new Ataque();
		nokemon1->inicializarAtaque();
		a1=nokemon1->getListaAtaques().at(rand1);
		double level = nokemon1->getNivel();
		double power = a1->getPoder();
		double attack = nokemon1->getAtaque();
		double defense = nokemon2->getDefensa();
		
		cout<<nokemon1->getNombre()<<" uso "<<a1->getNombre()<<endl;
		double dano = ((((2*level)/5)*power*(attack/defense))/50)+2;
		int danoInt = (int) dano;
		vida2 = vida2-danoInt;
		nokemon2->setSaludActual(vida2);
		
		cout<<"Salud de "<<nokemon2->getNombre()<<nokemon2->getSaludActual()<<"/"<<nokemon2->getSaludMaxima()<<endl;
		
		//ataque del segundo nokemon
		int rand2;
		rand2 = 0+rand()%1;
		Ataque* a2 = new Ataque();
		nokemon2->inicializarAtaque();
		a2=nokemon2->getListaAtaques().at(rand2);
		double level2 = nokemon2->getNivel();
		double power2 = a2->getPoder();
		double attack2 = nokemon2->getAtaque();
		double defense2 = nokemon1->getDefensa();
		
		cout<<nokemon2->getNombre()<<" uso "<<a2->getNombre()<<endl;
		double dano2 = ((((2*level2)/5)*power2*(attack2/defense2))/50)+2;
		int danoInt2 = (int) dano2;
		vida1 = vida1-danoInt2;
		nokemon1->setSaludActual(vida1);
		
		cout<<"Salud de "<<nokemon1->getNombre()<<nokemon1->getSaludActual()<<"/"<<nokemon1->getSaludMaxima()<<endl;
		
		
		if(nokemon1->getSaludActual()<=0){
			conVida=false;
			ganador=nokemon2;
			
		}else if(nokemon2->getSaludActual()<=0){
			conVida=false;
			ganador=nokemon1;
		}
		
		cout<<endl;
		
	}
	
	return ganador;
}