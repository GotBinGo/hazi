#include"vonat.h"

class IC : public Vonat
{
private:
	std::string neve;
public:
	IC(int ev, std::string nev);
	virtual void print();
	std::string getNeve();
	virtual ~IC();
};

