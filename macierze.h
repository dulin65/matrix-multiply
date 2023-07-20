#ifndef MACIERZE_H_INCLUDED
#define MACIERZE_H_INCLUDED
#include <iostream>
#include <math.h>


using namespace std;

class Macierze{
    public:
    float a1, a2, b1, b2, x1, x2, y1, y2;
    void zaladuj();
    void pokaz();
};

class Pomnozone :public Macierze{
    public:
    float m1, m2, n1, n2;
    void pomnoz();
    void pokaz();


};

#endif // MACIERZE_H_INCLUDED
