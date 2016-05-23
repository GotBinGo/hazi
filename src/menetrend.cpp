#include"menetrend.h"
#include<iostream>
#include<list>
#include<ctime>
#include"memtrace.h"

Menetrend::Menetrend(){}

void Menetrend::add(Jarat j)
{
	jaratok.insert(jaratok.begin(), j);
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

std::list<Jarat> Menetrend::Keres(time_t tim, time_t tim2)
{
	std::list<Jarat> ki;
	
	for(std::list<Jarat>::iterator it = jaratok.begin(); it != jaratok.end(); it++)
	{
		if(std::difftime((*it).getIndulasTime(), tim) >= 0 && std::difftime((*it).getIndulasTime(), tim2) <= 0)
		{
			ki.insert(ki.begin(), *it);
		}
	}
	return ki;
}

