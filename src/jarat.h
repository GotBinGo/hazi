#ifndef JARAT_H
#define JARAT_H

#include"vonat.h"
#include"allomas.h"
#include<ctime>

class Jarat
{
private:
	int km;
	Vonat *vonat;
	Allomas indulas, erkezes;
	std::time_t indulas_t, erkezes_t;
public:
	Jarat(Allomas ind, Allomas erk,int km, Vonat *von, std::time_t ind_t = time_t(0), std::time_t erk_t = time_t(0));
	void print() const;
	int jegyar(int osztaly = 2) const;
	int menetido() const;
	Allomas getIndulas() const;
	Allomas getErkezes() const;
	time_t getIndulasTime() const;
	time_t getErkezesTime() const;
};

#endif //JARAT_H

