#ifndef GYORSVONAT_H
#define GYORSVONAT_H

#include<string>

class Gyorsvonat : public Vonat
{
private:
	std::string neve;
public:
	Gyorsvonat(int ev, std::string nev);
	virtual void print();
	std::string getNeve();
	virtual ~Gyorsvonat();
};
#endif //GYORSVONAT_H

