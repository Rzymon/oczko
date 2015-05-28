#include <string>
#include <vector>
#include <iostream> //!STD I CALE TO BADZIEWIE
#include <algorithm> //! DO MIESZANIA TALII
#include <iomanip> //!DO SETW()
#include <stdlib.h> //!M.IN. CZYSZCZENIE KONSOLI

#include "Stol.h"
#include "Talia.h"
#include "Gracz.h"

Stol::Stol()
{

}

void Stol::ustaw_graczy(Gracz& gracz)
{
    string bufor_imie;
    cout << "Podaj liczbe graczy: ";
    cin>>liczba_graczy;
    for(int i=0; i<liczba_graczy; i++)
    {
        cout << "Podaj nazwe gracza [" << i+1 << "]:  ";
        cin >> bufor_imie;
        gracz.set_imie(bufor_imie);
        gracze.push_back(gracz);
    }
}

void Stol::jacy_gracze()
{
    for(int i=0; i<liczba_graczy; i++)
    {
        cout << gracze[i].get_imie() << endl;
    }
}

int Stol::tura(Gracz& gracz, Talia& talia)
{
    int aktywni_gracze = liczba_graczy;
    int aktywni_tura;
///!-------------------------------------------------------
    int wybor=0;

    for(int t=0; t<aktywni_gracze; t++)
    {
        aktywni_tura = aktywni_gracze;
            for(int i=0; i<liczba_graczy; i++)
            {
                system("clear");
                cout << "--------------------------***RANKING***--------------------------" << endl;
                for (int f=0; f<liczba_graczy; f++)
                {
                    cout << "[" << f+1 << "]" << gracze[f].get_imie() << ":  " << gracze[f].suma_pkt << endl;
                }
                cout << "--------------------------------------------" << endl;



                cout << "|||||||||| GRACZ [" << i+1 << "]:  " << gracze[i].get_imie() << "  ||||||||||" << endl;
                cout << "--------------------------------------------" << endl;
                if(gracz.karty>0)
                {
                    cout << gracze[i].reka_karty;
                }
                if(gracze[i].suma_pkt>21)
                {
                    aktywni_tura--;
                    wybor=2;
                }
                else
                {
                    cout << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << "[1] - Biore karte z talii" << endl;
                    cout << "[2] - Pasuje w tej rundzie" << endl;
                    cout << "[3] - Tasuj talie" << endl;
                    cout << "CO ROBISZ: ";
                    cin >> wybor;
                }

                switch(wybor)
                {
                case 1:
                    gracze[i].pobierz_karte(talia);
                    //gracze[i].dodaj_sume(talia);
                    system("clear");
                    break;
                case 2:
                    system("clear");
                    break;
                case 3:
                    talia.tasuj_talie();
                    wybor = 666;
                    system("clear");
                    break;
                }
            }
        if(aktywni_tura=0) break;
    }
}

int Stol::get_liczba_graczy()
{
    return liczba_graczy;
}

Stol::~Stol()
{

}
