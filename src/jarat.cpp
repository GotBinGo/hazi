#include"jarat.h"
#include<iostream>
#include<ctime>
#include"memtrace.h"

Jarat::Jarat(Allomas ind, Allomas erk, int km, Vonat * von, time_t ind_t, time_t erk_t)
:km(km), vonat(von), indulas(ind),erkezes(erk),indulas_t(ind_t),erkezes_t(erk_t)
{

}

void Jarat::print() const
{
	char s[100];
	vonat->print();
	std::cout << "\t";
	indulas.print();
	std::cout << "\t";
	erkezes.print();
	std::cout << "\t";
	std::cout << jegyar() << "Ft";
	std::cout << "\t";
	std::cout << jegyar(1) << "Ft";
	std::cout << "\t";
	strftime(s, 100, "%Y-%m-%d %H:%M:%S", localtime(&indulas_t));
	std::cout << s;
	std::cout << "\t";
	strftime(s, 100, "%Y-%m-%d %H:%M:%S", localtime(&erkezes_t));
	std::cout << s;
}
int Jarat::menetido() const
{
	return difftime(erkezes_t, indulas_t);
}

int Jarat::jegyar(int osztaly ) const
{
	
	return (-700*(osztaly-2))+km*8 + (vonat->isIC() ? 565 : 0);
}

Allomas Jarat::getIndulas() const
{
	return indulas;
}

Allomas Jarat::getErkezes() const
{
	return erkezes;
}

time_t Jarat::getIndulasTime() const
{
	return indulas_t;
}

time_t Jarat::getErkezesTime() const
{
	return erkezes_t;
}

