#include<string>

class Szemelyvonat : public Vonat
{
private:
	int keses;
public:
	Szemelyvonat(int ev, int kes);
	virtual void print();
	virtual ~Szemelyvonat();
};

