#include <string>
#include <cstring> //!POROWNYWANIE STRINGOW
#include <vector>
#include <iostream> //!STD I CALE TO BADZIEWIE
#include <algorithm> //! DO MIESZANIA TALII
#include <iomanip> //!DO SETW()
#include <cstdio>

#include "Talia.h"
#include "Gracz.h"

using namespace std;
string Talia::kolor[4] = {"Kier" , "Pik" , "Karo" , "Trefl"};
string Talia::figura[13] = {"2" , "3" , "4" , "5" , "6" , "7" , "8" , "9" , "10" , "Walet" , "Dama" , "Krol" , "As"};
int Talia::wartosci[13] = {2,3,4,5,6,7,8,9,10,2,3,4,11};

Talia::Talia()
{
    wartosc = 0;
}

string Talia::get_karta()
{
    string kasztan = talia[0];
    return kasztan;
}

void Talia::dodaj_talie()
{
    for(int f=0; f<13; f++)
    {
        for(int k=0; k<4; k++)
        {

            card = figura[f]+" || "+kolor[k];
            talia.push_back(card);
        }
    }
}

int Talia::get_zestaw_size()
{
    return talia.size();
}

void Talia::ile_talii()
{
    int ilosc=0;
    cin >> ilosc;

    for(int i=0; i<ilosc; i++)
    {
        for(int f=0; f<13; f++)
        {
            for(int k=0; k<4; k++)
            {

                card = figura[f]+" "+kolor[k];
                talia.push_back(card);
            }
        }
    }
}

void Talia::print_talia()
{
    int wielkosc = talia.size();

    for(int i=0; i<wielkosc; i++)
    {
        cout << "[" << i+1 << "]";
        cout.width(20);
        cout << left << setfill(' ') << talia[i] ;
        if(!((i+1)%5)) cout << endl;


        if(i+1==wielkosc) cout << endl;
    }
}
void Talia::tasuj_talie()
{
    random_shuffle(talia.begin(),talia.end());
}

void Talia::usun_karte()
{
    talia.erase(talia.begin());
}

Talia::~Talia()
{

}
