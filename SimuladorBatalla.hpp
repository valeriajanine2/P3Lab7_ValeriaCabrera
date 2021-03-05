#ifndef SIMULADORBATALLA_H
#define SIMULADORBATALLA_H
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include "Nokemon.hpp"
#include "Ataque.hpp"

using namespace std;

class SimuladorBatalla{
	public:
		SimuladorBatalla();
		~SimuladorBatalla();
		Nokemon* simularBatalla(Nokemon*,Nokemon*);
};

#endif