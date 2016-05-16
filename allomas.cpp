#include"allomas.h"
#include<string>
#include<iostream>

Allomas::Allomas(std::string nev):neve(nev){};

void Allomas::print()
{
	std::cout << neve << std::endl;
}

std::string Allomas::getNev() const
{
	return neve;
}

bool Allomas::operator==(const Allomas& b) const
{
	if(neve == b.getNev())
		return true;
	return false;
}

