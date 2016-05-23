#include"allomas.h"
#include<string>
#include<iostream>
#include"memtrace.h"
Allomas::Allomas(std::string nev):neve(nev){};

void Allomas::print() const
{
	std::cout << neve;
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

