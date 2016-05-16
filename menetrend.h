#include"jarat.h"
#include"szemelyvonat.h"
#include"gyorsvonat.h"
#include"ic.h"
#include<list>
#include <limits>

class Menetrend
{
private:
	std::list<Jarat> jaratok;
public:
	Menetrend();
	void add(Jarat j);
	std::list<Jarat> Keres(Allomas ind, Allomas erk);
	std::list<Jarat> Keres(time_t tim = time_t(0), time_t tim2 = std::numeric_limits<time_t>::max());
};

