#ifndef SILNIK_H
#define SILNIK_H

#include "tablica.h"

class Silnik
{
private:
    Silnik(const Silnik& s); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Silnik& operator=(const Silnik& s); // zabezpieczenie operatora przypisania =

public:
    Silnik();
    ~Silnik(){}

    Tablica *T;

    int gracz;
    int ruch_n;
    bool koniecGry;

    void Ruch(int, int);
    bool Analiza();
};

#endif // SILNIK_H
