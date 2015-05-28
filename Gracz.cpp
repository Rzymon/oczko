#include <string>
#include <vector>
#include <iostream> //STD I CALE TO BADZIEWIE
#include <algorithm> // DO MIESZANIA TALII
#include <iomanip> //DO SETW()

#include "Gracz.h"
#include "Talia.h"

Gracz::Gracz()
{
    karty = 0;
    suma_pkt = 0;
}

void Gracz::set_imie(string imie)
{
    this -> imie = imie;
}

string Gracz::get_imie()
{
    return imie;
}

string Gracz::pobierz_karte(Talia& talia)
{
    karta = talia.get_karta();
    reka_karty = "  |  " + karta;
    talia.usun_karte();
    karty++;
}

void Gracz::dodaj_sume(Talia& talia)
{
    for(int i=0; i<talia.get_zestaw_size(); i++)
    {
        if(karta == talia.figura[i])
        {
            talia.wartosc = talia.wartosci[i];
            suma_pkt += talia.wartosc;
        }
        break;
    }
}

Gracz::~Gracz()
{

}
