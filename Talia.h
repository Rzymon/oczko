#pragma once
#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>

#include "Gracz.h"

using namespace std;

class Gracz;

class Talia
{
private:
    static string kolor[4];
    static string figura[13];
    static int wartosci[13];
    int wartosc;
    string card;
    vector <string> talia;
public:
    Talia();
    string get_karta();
    int get_zestaw_size();
    void ile_talii();
    void dodaj_talie();
    void print_talia(); //!FUNKCJA KONTROLNA
    void tasuj_talie();
    void usun_karte();
    ~Talia();

    friend class Gracz;
    friend class Stol;
};
