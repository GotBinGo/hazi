#include"allomas.h"
#include<string>
#include<iostream>

Allomas::Allomas(std::string nev):neve(nev){};
void Allomas::print()
{
	std::cout << neve << std::endl;
}

