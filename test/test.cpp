#include <iostream>
#include <cstring>
#include <stdexcept>
#include "gtest_lite.h"
#include "myset.hpp"

#define TESZTLEVEL 2

/// Integer osztály.
/// int helyett használható
class Integer {
    int adat;
public:
    Integer(int i = 0) :adat(i) {}  /// kontruktor és egyben konverziós operátor
    operator int&() { return adat; }/// cast
    operator int() const { return adat; } /// const cast
};

/// Komplex osztály
/// Szándékosan egyszerû (buta)
class Komplex {
    double re;
    double im;
    Komplex(const Komplex&);
public:
    Komplex(double r = 0, double i = 0) :re(r), im(i) { }
    double getRe() const { return re; }
    double getIm() const { return im; }
};

	
/// Csak azt vizsgálja, hogy a sablon példányosítható-e
/// és a keletkezett kód lefordul-e
void teszt_0() {
    Set<int> int_set;
    Set<char> char_set;
    int_set.insert(1);
    int_set.isElement(0);
}

int main() {
    teszt_0();
#if TESZTLEVEL > 0
    TEST(int, insertino) {
        Set<int> s0;
        s0.insert(1);
        EXPECT_TRUE(s0.isElement(1));
        EXPECT_FALSE(s0.isElement(0));
    } END

    TEST(int, exception) {
        Set<int, 1> s0;
        EXPECT_NO_THROW(s0.insert(1));
        EXPECT_THROW(s0.insert(2), std::exception);
    } END

    TEST(char, insert) {
        Set<char> s0;
        s0.insert(1);
        EXPECT_TRUE(s0.isElement(1));
        EXPECT_FALSE(s0.isElement(0));
    } END

    TEST(Integer, insert) {
        Set<Integer> s0;
        s0.insert(Integer(1));
        EXPECT_TRUE(s0.isElement(Integer(1)));
        EXPECT_FALSE(s0.isElement(Integer(100)));
    } END
#endif

#if TESZTLEVEL > 1
    TEST(Komplex, insert) {
        Set<Komplex> s0;
        s0.insert(Komplex(1));
        EXPECT_TRUE(s0.isElement(Komplex(1)));
        EXPECT_FALSE(s0.isElement(Komplex(100)));
    } END
#endif

    return 0;
}
