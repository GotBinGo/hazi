#include<iostream>
#include"menetrend.h"

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
	
	IC *ic = new IC(1970,"Railjet");
	v=ic;
	v->print();
	std::cout << std::endl;

	Allomas a("Abda"), b("Baja");
	Jarat j(a,b);

	Menetrend m;

	m.add(j);

	std::cout << "end of program" << std::endl;
}

