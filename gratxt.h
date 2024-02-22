#ifndef GRATXT_H
#define GRATXT_H

#include "gra.h"

class GraTXT : public Gra
{
private:
    GraTXT(const GraTXT& gtxt); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    GraTXT& operator=(const GraTXT& gtxt); // zabezpieczenie operatora przypisania =

protected:
    virtual void GraWyswietl(int);
    virtual void PodajGracz(int);
    virtual void GraKoniec();
    virtual int ReadInt();
    virtual string ReadString();

public:
    GraTXT(){}
    ~GraTXT(){}
};

#endif // GRATXT_H
