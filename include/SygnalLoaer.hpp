#ifndef SYGNALLOAER_H
#define SYGNALLOAER_H
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <limits>

class SygnalLoaer
{
    public:
        SygnalLoaer();
        virtual ~SygnalLoaer();
        vector <Probka> wczytaj (string nazwa)
    {
     vector <Probka> tablica;
     ifstream plik("sygnal.csv");

     string linia;
     while(getline(plik,linia))
     {

        stringstream ss(linia);
         double _t, _x;
         ss >> _t;
         ss.ignore();
         ss >> _x;

        tablica.push_back (Probka(_t,_x)) ;

     }
     plik.close();

    return tablica;
    }

    protected:

    private:
};

#endif // SYGNALLOAER_H
