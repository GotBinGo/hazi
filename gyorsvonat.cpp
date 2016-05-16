#include"vonat.h"
#include"gyorsvonat.h"
#include<iostream>

Gyorsvonat::Gyorsvonat(int ev, std::string nev):Vonat(ev, gyorsvonat),neve(nev){};

void Gyorsvonat::print()
{
	std::cout << neve;
}

std::string Gyorsvonat::getNeve()
{
	return neve;
}

Gyorsvonat::~Gyorsvonat(){};

