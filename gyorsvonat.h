#include<string>

class Gyorsvonat : public Vonat
{
private:
	std::string neve;
public:
	Gyorsvonat(int ev, std::string nev);
	virtual void print();
	virtual ~Gyorsvonat();
};

