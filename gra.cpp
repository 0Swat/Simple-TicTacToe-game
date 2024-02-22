#include "gra.h"

Gra::Gra() : gracz1 ("Gracz 1"), gracz2 ("Gracz 2"){}


void Gra::Start()
{
    int i=1;

    PodajGracz(1);
    PodajGracz(-1);

    while(Silnik::koniecGry == false)
    {
        GraWyswietl(Silnik::gracz);
        Silnik::Ruch(Silnik::gracz, ReadInt());
    }

    GraWyswietl(Silnik::gracz);
    GraKoniec();

}
