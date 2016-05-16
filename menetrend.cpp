#include"menetrend.h"
#include<iostream>
#include<list>

Menetrend::Menetrend(){}

void Menetrend::add(Jarat j)
{
	jaratok.insert(jaratok.begin(), j);
	std::cout << "added" << std::endl;
}

std::list<Jarat> Menetrend::Keres(Allomas ind, Allomas erk)
{
	std::list<Jarat> ki;
	
	for(std::list<Jarat>::iterator it = jaratok.begin(); it != jaratok.end(); it++)
	{
		if((*it).getIndulas() == ind && (*it).getErkezes() == erk)
		{
			ki.insert(ki.begin(), *it);
		}
	}
	return ki;
}

