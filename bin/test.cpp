#include<iostream>
#include<sstream>
#include<string>
#include<cstring>
#include<stdexcept>
#include"menetrend.h"
#include"gtest_lite.h"

std::stringstream buffer;	
std::streambuf *sbuf;

void redir()
{
	sbuf = std::cout.rdbuf();
	std::cout.rdbuf(buffer.rdbuf());
}

void restore()
{
	std::cout.rdbuf(sbuf);
}

int main() 
{
	TEST(Szemelyvonat, integritas)
	{
		Szemelyvonat szv1(1970, 20);
		Szemelyvonat szv2(1991, 5);
		Szemelyvonat szv3 = szv2;

		EXPECT_TRUE(szv1.getKeses() == 20);
		EXPECT_TRUE(szv2.getKeses() == 5);
		EXPECT_TRUE(szv3.getKeses() == 5);

		redir();

		szv1.print_ev();
		std::cout << std::endl;
		szv1.print();
		std::cout << std::endl;

		szv2.print_ev();
		std::cout << std::endl;
		szv2.print();
		std::cout << std::endl;

		szv3.print_ev();
		std::cout << std::endl;
		szv3.print();
		std::cout << std::endl;

		restore();


		std::string s;

		std::getline(buffer, s);
		EXPECT_TRUE(s == "1970");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Szemelyvonat");

		std::getline(buffer, s);
		EXPECT_TRUE(s == "1991");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Szemelyvonat");

		std::getline(buffer, s);
		EXPECT_TRUE(s == "1991");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Szemelyvonat");

		EXPECT_FALSE(szv1.isIC());
		EXPECT_FALSE(szv2.isIC());
		EXPECT_FALSE(szv3.isIC());
	} END

	TEST(Gyorsvonat, integritas)
	{
		Gyorsvonat gyv1(1980, "Magyar Gyorsvonat");
		Gyorsvonat gyv2(2002, "Modern Gyorsvonat");
		Gyorsvonat gyv3 = gyv2;

		EXPECT_TRUE(gyv1.getNeve() == "Magyar Gyorsvonat");
		EXPECT_TRUE(gyv2.getNeve() == "Modern Gyorsvonat");
		EXPECT_TRUE(gyv3.getNeve() == "Modern Gyorsvonat");

		redir();

		gyv1.print_ev();
		std::cout << std::endl;
		gyv1.print();
		std::cout << std::endl;

		gyv2.print_ev();
		std::cout << std::endl;
		gyv2.print();
		std::cout << std::endl;

		gyv3.print_ev();
		std::cout << std::endl;
		gyv3.print();
		std::cout << std::endl;

		restore();


		std::string s;
		
		std::getline(buffer, s);
		EXPECT_TRUE(s == "1980");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Magyar Gyorsvonat");
	
		std::getline(buffer, s);
		EXPECT_TRUE(s == "2002");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Modern Gyorsvonat");
	
		std::getline(buffer, s);
		EXPECT_TRUE(s == "2002");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Modern Gyorsvonat");
	
		EXPECT_FALSE(gyv1.isIC());
		EXPECT_FALSE(gyv2.isIC());
		EXPECT_FALSE(gyv3.isIC());
		//EXPECT_THROW(throw std::range_error(""), std::exception);
		//EXPECT_NO_THROW(a+b);
	} END

	TEST(IC, integritas)
	{
		IC ic1(2005, "Kekfrankos");
		IC ic2(2008, "Hortobagy nemzetkozi");
		IC ic3 = ic2;

		EXPECT_TRUE(ic1.getNeve() == "Kekfrankos");
		EXPECT_TRUE(ic2.getNeve() == "Hortobagy nemzetkozi");
		EXPECT_TRUE(ic3.getNeve() == "Hortobagy nemzetkozi");

		redir();

		ic1.print_ev();
		std::cout << std::endl;
		ic1.print();
		std::cout << std::endl;

		ic2.print_ev();
		std::cout << std::endl;
		ic2.print();
		std::cout << std::endl;

		ic3.print_ev();
		std::cout << std::endl;
		ic3.print();
		std::cout << std::endl;

		restore();


		std::string s;
		
		std::getline(buffer, s);
		EXPECT_TRUE(s == "2005");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Kekfrankos");
	
		std::getline(buffer, s);
		EXPECT_TRUE(s == "2008");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Hortobagy nemzetkozi");
	
		std::getline(buffer, s);
		EXPECT_TRUE(s == "2008");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Hortobagy nemzetkozi");
	
		EXPECT_TRUE(ic1.isIC());
		EXPECT_TRUE(ic2.isIC());
		EXPECT_TRUE(ic3.isIC());
		//EXPECT_THROW(throw std::range_error(""), std::exception);
		//EXPECT_NO_THROW(a+b);
	} END

	TEST(Allomas, integritas)
	{
		Allomas a("Abda"), b("Baja");
		Allomas c("Abda");
		Allomas d = a;

		EXPECT_TRUE(a.getNev() == "Abda");
		EXPECT_TRUE(b.getNev() == "Baja");
		EXPECT_TRUE(c.getNev() == "Abda");
		EXPECT_TRUE(d.getNev() == "Abda");


		EXPECT_FALSE(a == b);
		EXPECT_TRUE(a == c);
		EXPECT_TRUE(a == d);
		EXPECT_TRUE(c == d);

		redir();

		a.print();
		std::cout << std::endl;
		b.print();
		std::cout << std::endl;
		
		restore();

		std::string s;

		std::getline(buffer, s);
		EXPECT_TRUE(s == "Abda");
		std::getline(buffer, s);
		EXPECT_TRUE(s == "Baja");

	} END

	TEST(Jarat, integritas)
	{
		Allomas a("Abda"), b("Baja");
		Szemelyvonat szv2(1991, 5);
		IC ic2(2008, "Hortobagy nemzetkozi");

		Jarat j1(a, b, 180, &szv2, time_t(0), time_t(7));
		Jarat j2(a, b, 180, &ic2, time_t(0), time_t(5));

		EXPECT_TRUE(j1.jegyar() == 1440);
		EXPECT_TRUE(j2.jegyar() == 2005);

		EXPECT_TRUE(j1.getIndulas() == a);
		EXPECT_TRUE(j1.getErkezes() == b);

		EXPECT_TRUE(j1.getIndulas() == j2.getIndulas());
		EXPECT_TRUE(j1.getErkezes() == j2.getErkezes());

		EXPECT_TRUE(j1.menetido() == 7);
		EXPECT_TRUE(j2.menetido() == 5);
	
	} END

	TEST(Menetrend, integritas)
	{
		Allomas a("Abda"), b("Baja"), c("Cegled"), d("Dorog");
		Szemelyvonat szv1(1970, 20);
		Gyorsvonat gyv1(1980, "Magyar Gyorsv");
		IC ic2(2008, "Hortobagy nemz");

		Jarat j1(a, b, 180, &gyv1, time_t(0), time_t(17));
		Jarat j2(c, d, 100, &szv1, time_t(5), time_t(25));
		Jarat j3(a, c, 280, &ic2, time_t(7), time_t(15));
		Jarat j4(a, d, 70, &szv1, time_t(30), time_t(37));
		Jarat j5(a, b, 180, &gyv1, time_t(40), time_t(57));

		Menetrend m;

		m.add(j1);
		m.add(j2);
		m.add(j3);
		m.add(j4);
		m.add(j5);
	
		std::list<Jarat> ker0 = m.Keres();
		std::cout << "A teljes menetrend" << std::endl;
		EXPECT_TRUE(ker0.size() == 5);
		for(std::list<Jarat>::iterator it = ker0.begin(); it != ker0.end(); it++)
		{
			(*it).print();
			std::cout << std::endl;
		}
		std::cout << std::endl;

	
		std::list<Jarat> ker1 = m.Keres(a, b);
		std::cout << "Abda-Baja" << std::endl;
		EXPECT_TRUE(ker1.size() == 2);
		for(std::list<Jarat>::iterator it = ker1.begin(); it != ker1.end(); it++)
		{
			(*it).print();
			std::cout << std::endl;
		}
		std::cout << std::endl;
	

		std::list<Jarat> ker2 = m.Keres(c, d);
		std::cout << "Cegled-Dunaujvaros" << std::endl;
		EXPECT_TRUE(ker2.size() == 1);
		for(std::list<Jarat>::iterator it = ker2.begin(); it != ker2.end(); it++)
		{
			(*it).print();
			std::cout << std::endl;
		}
		std::cout << std::endl;
	
		std::list<Jarat> ker3 = m.Keres(time_t(7));
		std::cout << "7 utan kozlekedik" << std::endl;
		EXPECT_TRUE(ker3.size() == 3);
			for(std::list<Jarat>::iterator it = ker3.begin(); it != ker3.end(); it++)
		{
			(*it).print();
			std::cout << std::endl;
		}
		std::cout << std::endl;
		
		std::list<Jarat> ker4 = m.Keres(time_t(7), time_t(15));
		std::cout << "7 es 15 kozott kozlekedik" << std::endl;
		EXPECT_TRUE(ker4.size() == 1);
			for(std::list<Jarat>::iterator it = ker4.begin(); it != ker4.end(); it++)
		{
			(*it).print();
			std::cout << std::endl;
		}
		std::cout << std::endl;
	
		
	} END

	return 0;
}
