#ifndef GRA_H
#define GRA_H
#include "string"
#include "silnik.h"

using namespace std;

class Gra : public Silnik
{
private:
    Gra(const Gra& g); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Gra& operator=(const Gra& g); // zabezpieczenie operatora przypisania =

protected:
    virtual void GraWyswietl(int) = 0;
    virtual void PodajGracz(int) = 0;
    virtual void GraKoniec() = 0;
    virtual int ReadInt() = 0;
    virtual string ReadString() = 0;

    string gracz1;
    string gracz2;


public:
    Gra();
    ~Gra(){}

    void Start();
};

#endif // GRA_H
