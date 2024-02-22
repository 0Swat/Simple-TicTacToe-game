#ifndef TABLICA_H
#define TABLICA_H

class Tablica
{
private:
    Tablica(const Tablica& t); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Tablica& operator=(const Tablica& t); // zabezpieczenie operatora przypisania =


public:
    Tablica();
    ~Tablica();

    int **plansza;

    friend class Silnik;
};

#endif // INPUT_H
