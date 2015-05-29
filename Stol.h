#pragma once
#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>

#include "Talia.h"
#include "Gracz.h"

using namespace std;

class Stol: public Gracz
{
private:
    int liczba_graczy;
public:
    vector <Gracz> gracze;
    Stol();
    int get_liczba_graczy();
    void ustaw_graczy(Gracz&);
    void jacy_gracze();
    void tura(Gracz&, Talia&);
    ~Stol();
};

