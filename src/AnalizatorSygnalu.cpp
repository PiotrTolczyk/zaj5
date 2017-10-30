#include "AnalizatorSygnalu.hpp"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <limits>

AnalizatorSygnalu::AnalizatorSygnalu()
{
      double mini (vector <Probka> probkix)
    {
    double minimum = 10000.0;

    for (int i = 0; i < probkix.size(); i++)
        {
     if (probkix[i].x < minimum)
     {
     minimum = probkix[i].x;
     }
}
 return minimum;
}

double maxi (vector <Probka> probkix)
{
double maximum = -10000.0;
for (int i = 0; i < probkix.size(); i++)
    {
        if (probkix[i].x > maximum)
        {
        maximum = probkix[i].x;
        }
    }
return maximum;
}

double srednia (vector <Probka> probkix)
{
double m = 0.0;
for (int i = 0; i < probkix.size(); i++)
    {
    m = m + probkix[i].x;
    }
    if (probkix.size() > 0)
    {
    m = m / probkix.size();
    }
return m;
}

double calkowanie (vector<Probka> probkix)
{
    double dt1, dpole1, calka;
    for (int i = 0; i <= (probkix.size()) -1; i++)
    {
     dt1 = probkix[i + 1].t - probkix[i].t;
     dpole1 = (probkix[i].x + probkix[i + 1].x) * dt1 / 2;
    calka = calka + dpole1;
    }
   return calka;

}

double dlugosc_vectora(vector <Probka> probkiy)
{
    double probki_dtp = probkiy[0].t;

    double probki_dt = probkiy[probkiy.size()-1].t;
    double roznica = probki_dt - probki_dtp;

    return roznica;
}
}

AnalizatorSygnalu::~AnalizatorSygnalu()
{
    //dtor
}
