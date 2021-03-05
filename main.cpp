#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include "Nokemon.hpp"
#include "NokemonFuego.hpp"
#include "NokemonHielo.hpp"
#include "NokemonHierba.hpp"
#include "AnafreMon.hpp"
#include "AguacateMon.hpp"
#include "CharamuscoMon.hpp"
#include "SimuladorBatalla.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	srand (time(NULL));
	int usuario;
	cout<<"NOKEMON"<<endl;
	cout<<"Escoja su Nokemon: \n1) AguacateMon\n2) AnafreMon\n3) CharamuscoMon"<<endl;
	cout<<"Ingrese el numero del nokemon: ";
	cin>>usuario;
	
	Nokemon* nokemonUser;
	Nokemon* nokemonPC;
	int pc;
	
	pc = 1+rand()%3;
	
	switch(usuario){
		
		case 1:{
			int nivel = 5+rand()%10;
			vector<Ataque*> lista;
			AguacateMon* aguacate = new AguacateMon(49,49,lista,45,45,nivel,"AguacateMon");
			NokemonHierba* temp = (NokemonHierba*) aguacate;
			nokemonUser = temp;
			
			break;
		}
		
		case 2:{
			int nivel = 5+rand()%10;
			vector<Ataque*> lista;
			AnafreMon* anafre = new AnafreMon(43,52,lista,39,39,nivel,"AnafreMon");
			NokemonFuego* temp = (NokemonFuego*) anafre;
			nokemonUser = temp;
			
			break;
		}
		
		case 3:{
			int nivel = 5+rand()%10;
			vector<Ataque*> lista;
			CharamuscoMon* charamusca = new CharamuscoMon(65,48,lista,44,44,nivel,"CharamuscoMon");
			NokemonHielo* temp = (NokemonHielo*) charamusca;
			nokemonUser = temp;
			
			break;
		}
		
		default:{
			cout<<"Asegurese de ingresar una de las opciones de los Nokemon :)"<<endl;
			break;
		}
	}//fin del switch del usuario
	
	cout<<pc<<endl;
	
	switch(pc){
		
		case 1:{
			int nivel = 5+rand()%10;
			vector<Ataque*> lista;
			AguacateMon* aguacate = new AguacateMon(49,49,lista,45,45,nivel,"AguacateMon");
			NokemonHierba* temp = (NokemonHierba*) aguacate;
			nokemonPC = temp;
			
			break;
		}
		
		case 2:{
			int nivel = 5+rand()%10;
			vector<Ataque*> lista;
			AnafreMon* anafre = new AnafreMon(43,52,lista,39,39,nivel,"AnafreMon");
			NokemonFuego* temp = (NokemonFuego*) anafre;
			nokemonPC = temp;
			
			break;
		}
		
		case 3:{
			int nivel = 5+rand()%10;
			vector<Ataque*> lista;
			CharamuscoMon* charamusca = new CharamuscoMon(65,48,lista,44,44,nivel,"CharamuscoMon");
			NokemonHielo* temp = (NokemonHielo*) charamusca;
			nokemonPC = temp;
			
			break;
		}
		
		default:{
			cout<<"Asegurese de ingresar una de las opciones de los Nokemon :)"<<endl;
			break;
		}
	}//fin del switch del pc
	
	//agregar los ataques al nokemon
	
	Nokemon* ganador;
	SimuladorBatalla* simulador = new SimuladorBatalla();
	ganador = simulador->simularBatalla(nokemonUser,nokemonPC);
	cout<<"Felicidades "<<ganador->getNombre()<<", ganaste la batalla Nokemon, puedes recoger tu medalla Maestro Nokemon <3"<<endl;
	
	delete simulador;
	return 0;
	
}