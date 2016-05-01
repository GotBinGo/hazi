#include"vonat.h"
#include"szemelyvonat.h"
#include<iostream>

Szemelyvonat::Szemelyvonat(int ev, int kes):Vonat(ev),keses(kes){};
void Szemelyvonat::print()
{
	std::cout<<keses<<std::endl;
}
Szemelyvonat::~Szemelyvonat(){};
