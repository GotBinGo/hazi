#include<iostream>
#include"menetrend.h"

int main()
{
	Vonat *v;
	Gyorsvonat *gy = new Gyorsvonat(1970,"Kekfrankos");
	v=gy;
	v->print();
	Szemelyvonat *sz = new Szemelyvonat(1970,10);
	v=sz;
	v->print();

	Allomas a("Abda"), b("Baja");
	Jarat j(a,b);

	Menetrend m;

	m.add(j);

	std::cout << "end of program" << std::endl;
}

