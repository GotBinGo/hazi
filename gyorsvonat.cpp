#include"vonat.h"
#include"gyorsvonat.h"
#include<iostream>

Gyorsvonat::Gyorsvonat(int ev, std::string nev):Vonat(ev),neve(nev){};
void Gyorsvonat::print()
{
	std::cout<<neve<<std::endl;
}
Gyorsvonat::~Gyorsvonat(){};
