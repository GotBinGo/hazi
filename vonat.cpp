#include"vonat.h"
#include<iostream>

Vonat::Vonat(int ev, vonat_tipus vt = ic):gyartas_eve(ev),tipus(vt){};

void Vonat::print_ev() const
{
	std::cout << gyartas_eve;
}
bool Vonat::isIC() const
{
	return tipus == ic;
}
Vonat::~Vonat(){};

