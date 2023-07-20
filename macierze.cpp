#include <iostream>
#include <math.h>
#include "macierze.h"
using namespace std;

    void Macierze::zaladuj()
    {
        cout<<"Podaj dwie macierze 2x2"<<endl;
        cout<<"Podaj element 1.1 w pierwszej macierzy: ";
        cin>>a1;
        cout<<"Podaj element 1.2 w pierwszej macierzy: ";
        cin>>a2;
        cout<<"Podaj element 2.1 w pierwszej macierzy: ";
        cin>>b1;
        cout<<"Podaj element 2.2 w pierwszej macierzy: ";
        cin>>b2;
        cout<<"Podaj element 1.1 w drugiej macierzy: ";
        cin>>x1;
        cout<<"Podaj element 1.1 w drugiej macierzy: ";
        cin>>x2;
        cout<<"Podaj element 1.1 w drugiej macierzy: ";
        cin>>y1;
        cout<<"Podaj element 1.1 w drugiej macierzy: ";
        cin>>y2;
    }
    void Macierze::pokaz()
    {
        cout<<"Oto twoja pierwsza macierz: "<<endl;
        cout<<"[ "<<a1<<" "<<a2<<" ]"<<endl;
        cout<<"[ "<<b1<<" "<<b2<<" ]"<<endl;
        cout<<"Oto twoja druga macierz: "<<endl;
        cout<<"[ "<<x1<<" "<<x2<<" ]"<<endl;
        cout<<"[ "<<y1<<" "<<y2<<" ]"<<endl;
    }
    void Pomnozone::pomnoz()
    {
        Macierze::zaladuj();
        Macierze::pokaz();
        m1 = (a1*x1)+(a2*y1);
        m2 = (a1*x2)+(a2*y2);
        n1 = (b1*x1)+(b2*y1);
        n2 = (b1*x2)+(b2*y2);

    }
    void Pomnozone::pokaz()
    {
        cout<<"Oto macierz powstala z pomnozenia: "<<endl;
        cout<<"[ "<<m1<<" "<<m2<<" ]"<<endl;
        cout<<"[ "<<n1<<" "<<n2<<" ]"<<endl;
    }
