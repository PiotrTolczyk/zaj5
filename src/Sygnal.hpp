#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <limits>

class Sygnal {
    public:
        double amplituda;
        double czestotliwosc;
        double faza;
        virtual ~Sygnal() {}
        virtual double x(double t) = 0;
        virtual void wypisz(std::ostream& s) = 0;
    friend std::ostream& operator<<(std::ostream& s, const Sygnal&sygnal)
    {
        sygnal.wypisz(s);
        return s;
    }
};
#endif
