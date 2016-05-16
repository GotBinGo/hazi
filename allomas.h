#include<string>

class Allomas 
{
private:
	std::string neve;
public:
	Allomas(std::string nev);
	std::string getNev() const;
	bool operator==(const Allomas& b) const;
	void print() const;
};

