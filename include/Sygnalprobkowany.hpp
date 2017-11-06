#ifndef SYGNAL_H
#define SYGNAL_H
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <limits>


class Sygnalprobkowany
{
    public:
        Sygnal(probki : std::vector<Probka>);
        virtual ~Sygnal();
        void odczyt(vector <Probka> probkix)
{
    for (int i =0; i < probkix.size(); i++)
    {
    cout<<probkix[i].t<<" ";
    cout<<probkix[i].x<<endl;
    }
}

void zapisz (vector <Probka> probkix)
{
    ofstream plik("cwiczenie.txt");

    for (int i = 0; i <= probkix.size(); i++)
    {
    plik << probkix[i].t << ", " << probkix[i].x << endl;
    }
plik.close();
}

    protected:

    private:
};

#endif // SYGNAL_H
