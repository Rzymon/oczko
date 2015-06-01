#pragma once
#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>

#include "Talia.h"

using namespace std;

class Talia;
class Stol;

class Gracz
{
private:
    string imie;
    int ktory_gracz;
    string reka_karty;
    int karty;
    int suma_pkt;
    string karta;
public:
    Gracz();
    void set_imie(string);          //!USTAWIA IMIE GRACZ(TYLKO RAZ NA POCZATKU)
    string get_imie();              //!POBIERA IMIE GRACZA
    void pobierz_karte(Talia&);   //!DODAJE KARTE DO REKI GRACZA
    void dodaj_sume(Talia&);        //!DODAJE PKT DO PULI GRACZA
    ~Gracz();

    friend class Stol;
    friend class Talia;
};
