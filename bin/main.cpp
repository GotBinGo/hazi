#include<iostream>
#include"menetrend.h"
#include"memtrace.h"
int main()
{
	Vonat *v;

	Szemelyvonat *sz = new Szemelyvonat(1970,10);
	v=sz;
	v->print();
	std::cout << std::endl;

	Gyorsvonat *gy = new Gyorsvonat(1970,"Kekfrankos");
	v=gy;
	v->print();
	std::cout << std::endl;

	IC *ic = new IC(1970,"Railjet(RJ 42)");
	v=ic;
	v->print();
	std::cout << std::endl;

	Allomas a("Abda"), b("Baja");
	Jarat j(a,b,180,sz ,5, 10);
	Jarat j2(a,b,180,ic ,3, 5);
	std::cout << j.menetido();
	std::cout << std::endl;
	Menetrend m;

	m.add(j);
	m.add(j2);
	std::list<Jarat> ker = m.Keres(a, b);	
	std::cout << "Talalatok szama: " << ker.size() << std::endl;
	for(std::list<Jarat>::iterator it = ker.begin(); it != ker.end(); it++)
	{
	  (*it).print();
	  std::cout << std::endl;
	}

	ker = m.Keres(time_t(4), time_t(4));
	std::cout << "Talalatok szama: " << ker.size() << std::endl;
	for(std::list<Jarat>::iterator it = ker.begin(); it != ker.end(); it++)
	{
	  (*it).print();
	  std::cout << std::endl;
	}

	delete sz;
	delete gy;
	delete ic;
}

