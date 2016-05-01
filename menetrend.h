#include"jarat.h"
#include"gyorsvonat.h"
#include"szemelyvonat.h"
#include<list>

class Menetrend
{
private:
	std::list<Jarat> jaratok;
public:
	Menetrend();
	void add(Jarat j);
	std::list<Jarat> Keres(Allomas ind, Allomas erk);
};

