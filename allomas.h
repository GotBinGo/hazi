#ifndef ALLOMAS_H
#define ALLOMAS_H

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
#endif //ALLOMAS_H

