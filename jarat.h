#include"vonat.h"
#include"allomas.h"
#include<ctime>

class Jarat
{
private:
	std::time_t indulas_t, erkezes_t;
	Allomas indulas, erkezes;
	Vonat *vonat;
public:
	Jarat(Allomas ind, Allomas erk);
	Allomas getIndulas() const;
	Allomas getErkezes() const;
};

