#include"vonat.h"
#include"ic.h"
#include<iostream>

IC::IC(int ev, std::string nev):Vonat(ev, ic), neve(nev)
{

}

void IC::print()
{
	std::cout << neve;
}

std::string IC::getNeve()
{
	return neve;
}
IC::~IC(){}

