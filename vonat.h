#include<string>

class Vonat
{
private:
	int gyartas_eve;
public:
	Vonat(int ev);
	virtual void print() = 0;
	virtual ~Vonat() = 0;
};

