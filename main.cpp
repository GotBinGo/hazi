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
	std::cout << "end of program" << std::endl;
}

