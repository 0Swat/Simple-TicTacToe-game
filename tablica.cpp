#include "tablica.h"

Tablica::Tablica()
{
    plansza = new int* [3];
    for(int i=0; i<3; i++)
    {
        plansza[i] = new int [3];
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            plansza[i][j] = 0;
        }
    }
}

Tablica::~Tablica()
{
    if(plansza)
    {
        for(int i=0; i<3; i++)
        {
            delete []plansza[i];
        }
        delete []plansza;
    }
}
