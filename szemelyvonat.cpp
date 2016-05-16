#include"vonat.h"
#include"szemelyvonat.h"
#include<iostream>
#include"memtrace.h"

Szemelyvonat::Szemelyvonat(int ev, int kes):Vonat(ev, szemelyvonat),keses(kes){};
void Szemelyvonat::print()
{
	std::cout << "Szemelyvonat";
}
int Szemelyvonat::getKeses()
{
	return keses;	
}
Szemelyvonat::~Szemelyvonat(){};
