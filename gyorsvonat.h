#include<string>

class Gyorsvonat : Vonat
{
private:
	std::string neve;
public:
	Gyorsvonat(int ev, std::string nev):Vonat(ev),neve(nev){};
};

