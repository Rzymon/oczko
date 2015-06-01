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

void Gracz::pobierz_karte(Talia& talia)
{
    karta = talia.get_karta();
    if(karty<1) {reka_karty = karta;}
    if(karty>0) {reka_karty = reka_karty + " | " + karta;}
    karty++;
    talia.usun_karte();
}

void Gracz::dodaj_sume(Talia& talia)
{
    for(int i=0; i<13; i++)
    {
        printf("%i", i);
        if(karta.c_str() == talia.figura[i].c_str())
        {
            printf("sprawdzam..."); system("sleep 2");
            suma_pkt += talia.wartosci[i];
        }
    }
    talia.usun_karte();
}

Gracz::~Gracz()
{

}
