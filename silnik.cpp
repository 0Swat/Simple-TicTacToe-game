#include "silnik.h"

Silnik::Silnik()
{
    T = new Tablica;
    gracz = 1;
    ruch_n = 0;
    koniecGry = false;
}

void Silnik::Ruch(int x, int num)
{
    switch(num)
    {
    case 1:
        if (T->plansza[0][0] != 0)
            return;
        T->plansza[0][0] = x;
        break;
    case 2:
        if (T->plansza[0][1] != 0)
            return;
        T->plansza[0][1] = x;
        break;
    case 3:
        if (T->plansza[0][2] != 0)
            return;
        T->plansza[0][2] = x;
        break;
    case 4:
        if (T->plansza[1][0] != 0)
            return;
        T->plansza[1][0] = x;
        break;
    case 5:
        if (T->plansza[1][1] != 0)
            return;
        T->plansza[1][1] = x;
        break;
    case 6:
        if (T->plansza[1][2] != 0)
            return;
        T->plansza[1][2] = x;
        break;
    case 7:
        if (T->plansza[2][0] != 0)
            return;
        T->plansza[2][0] = x;
        break;
    case 8:
        if (T->plansza[2][1] != 0)
            return;
        T->plansza[2][1] = x;
        break;
    case 9:
        if (T->plansza[2][2] != 0)
            return;
        T->plansza[2][2] = x;
        break;
    default:
       return;
    }

    gracz=gracz*-1;
    ruch_n++;
    koniecGry = Analiza();
}

bool Silnik::Analiza()
{
    int suma = 0;

    // sprawdzanie wygranych w poziomie
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
           suma+=T->plansza[i][j];
        }
        if(suma==3 || suma==-3) return true;
        suma = 0;
    }

    // sprawdzanie wygranych w pionie
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
           suma+=T->plansza[j][i];
        }
        if(suma==3 || suma==-3) return true;
        suma = 0;
    }

    // sprawdzanie wygranej po skosie 1
    for(int i=0; i<3; i++)
    {
       suma+=T->plansza[i][i];
    }
    if(suma==3 || suma==-3) return true;
    suma = 0;

    // sprawdzanie wygranej po skosie 2
    for(int i=2; i>-1; i--)
    {
       suma+=T->plansza[i][i];
    }
    if(suma==3 || suma==-3) return true;
    suma = 0;

    return false;
}


