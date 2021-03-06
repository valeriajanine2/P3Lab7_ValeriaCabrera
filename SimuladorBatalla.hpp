#ifndef SIMULADORBATALLA_H
#define SIMULADORBATALLA_H
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include "Nokemon.hpp"
#include "AguacateMon.hpp"
#include "NokemonHierba.hpp"
#include "AnafreMon.hpp"
#include "NokemonFuego.hpp"
#include "CharamuscoMon.hpp"
#include "NokemonHielo.hpp"
#include "Ataque.hpp"

using namespace std;

class SimuladorBatalla{
	public:
		SimuladorBatalla();
		~SimuladorBatalla();
		Nokemon* simularBatalla(Nokemon*,Nokemon*);
};

#endif