#include <iostream>
#include <windows.h>
#include "gratxt.h"

using namespace std;

void GraTXT::GraWyswietl(int g_in)
{
    //stan gry
    system("cls");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(T->plansza[i][j] == -1)
            {
                cout << " X ";
            }
            else if(T->plansza[i][j] == 1)
            {
                cout << " O ";
            }
            else
            {
                cout << " " << (i*3)+1+j << " ";
            }
        }
        cout << "\n";
    }

    // wyswietla czyj ruch
    cout << "\n";
    switch(g_in)
    {
    case 1:
        cout << gracz1;
        break;
    case -1:
        cout << gracz2;
        break;
    }
    cout << ", twoj ruch! \n";
}

void GraTXT::PodajGracz(int g_in)
{
    switch(g_in)
    {
    case 1:
        cout << "Podaj nazwe gracza 1: ";
        gracz1 = ReadString();
        break;
    case -1:
        cout << "Podaj nazwe gracza 2: ";
        gracz2 = ReadString();
        break;
    }
}

void GraTXT::GraKoniec()
{
    cout << "\nKoniec gry, wygrywa ";
    if(Silnik::ruch_n == 9)
    {
        cout << "zaden z graczy, mamy remis!";
    }
    else if((gracz*-1)==1)
    {
        cout << gracz1;
    }
    else
    {
        cout << gracz2;
    }

}

int GraTXT::ReadInt()
{
    int input;
    cin >> input;
    return input;
}

string GraTXT::ReadString()
{
    string string_out;
    cin >> string_out;
    return string_out;
}
