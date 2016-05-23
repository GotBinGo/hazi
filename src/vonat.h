#ifndef VONAT_H
#define VONAT_H

#include<string>

enum vonat_tipus {szemelyvonat, gyorsvonat, ic};

class Vonat
{
private:
	int gyartas_eve;
	const vonat_tipus tipus;
public:
	Vonat(int ev, vonat_tipus vt);
	bool isIC() const;
	virtual void print() = 0;
	void print_ev() const;
	virtual ~Vonat() = 0;
};

#endif //VONAT_H

