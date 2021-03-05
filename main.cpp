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
	
	switch(usuario){
		case 1:{
			int nivel = 5+rand()%10;
			vector<Ataque*> lista;
			NokemonHierba* temp = new NokemonHierba();
			AguacateMon* aguacate = new AguacateMon(49,49,lista,45,45,nivel,"AguacateMon");
			temp = aguacate;
			nokemonUser = temp;
			
			break;
		}
		
		case 2:{
			int nivel = 5+rand()%10;
			vector<Ataque*> lista;
			NokemonFuego* temp = new NokemonFuego();
			AnafreMon* anafre = new AnafreMon(43,52,lista,39,39,nivel,"AnafreMon");
			temp = anafre;
			nokemonUser = temp;
			
			break;
		}
		
		case 3:{
			int nivel = 5+rand()%10;
			vector<Ataque*> lista;
			NokemonHielo* temp = new NokemonHielo();
			CharamuscoMon* charamusca = new CharamuscoMon(65,48,lista,44,44,nivel,"CharamuscoMon");
			temp = charamusca;
			nokemonUser = temp;
			
			break;
		}
		
		default:{
			cout<<"Asegurese de ingresar una de las opciones de los Nokemon :)"<<endl;
			break;
		}
	}//fin del switch del usuario
	
	Nokemon* nokemonPC;
	
	
	return 0;
}