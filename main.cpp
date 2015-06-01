#include <iostream>
#include <string>
#include <vector>
#include <ncurses.h> //!FORMATOWANIE TEKSTU
#include <stdlib.h> //!M.IN. CZYSZCZENIE KONSOLI
#include <iomanip> //!DO SETW()
#include <stdio.h>


#include "Talia.h"
#include "Gracz.h"
#include "Stol.h"
#include "Troll.h"

class Gracz;
class Talia;
class Stol;

using namespace std;

int main()
{
    char fool;
    int wybor=0;
    Talia t1;
    Gracz g1;
    Stol s1;
    Troll tt;
    do
    {
        system("clear");
        cout << "\n                 __";
        cout << "\n                /  >";
        cout << "\n  *            /  /________________________________________________";
        cout << "\n (O)77777777777)  7                                                `~~--__";
        cout << "\n8OO>>>>>>>>>>>>] <===   Szymon Werkowski - panmiska@gmail.com           __-";
        cout << "\n (O)LLLLLLLLLLL)  L________________________________________________.--~~";
        cout << "\n  *            \\  \\";
        cout << "\n                \\__>";
        cout << "\n";
        cout << "Witaj!" << endl;
        cout << "[1] - Nowa Gra" << endl;
        cout << "[2] - Graj przez siec/////////// wyswietl karty" << endl;
        cout << "[3] - Opcje grafiki" << endl;
        cout << "[4] - Polacz z usluga Steam" << endl;
        cout << "[5] - Zaloguj przez Facebook'a" << endl;
        cout << "[6] - Sprawdz swoj ranking online" << endl;
        cout << "[11] - wyjdz" << endl;
        cin >> wybor;

        switch(wybor)
        {
        case 1:
        {
            system("clear");
            cout << "----------------------------------------" << endl;
            cout << "Najpierw podaj ile talii ma zawierac zestaw kart w tej grze:  ";
            t1.ile_talii();
            t1.tasuj_talie();
            cout << endl;
            cout << "Zestaw talii zostal utworzony i przestasowany!" << endl;
            cout << "Bedziesz go mogl tasowac i przegladac w trakcie gry" << endl;
            cout << "----------------------------------------" << endl;
            cout << "Podaj teraz liczbe graczy w tej grze oraz nazwe kazdego z nich: " << endl;
            s1.ustaw_graczy(g1);
            cout << endl;
            cout << "Wszyscy Gracze zostali dodani! Zapamietaj swoja nazwe i numer gracza." << endl;
            cout << "Bedzie on wyswietlany na stole podczas gry" << endl;
            cout << "----------------------------------------" << endl;
            system("clear");
            cout << "[Dowolny klawisz] - Aby rozpoczac gre z tymi ustawieniami" << endl;
            cin >> fool;
            s1.tura(g1,t1);
            s1.ranking(g1);
            break;
        }
        case 2:
        {
            tt.print_troll();
            break;
        }
        case 3:
        {
            tt.print_troll();
            break;
        }
        case 4:
        {
            tt.print_troll();
            break;
        }
        case 5:
        {
            tt.print_troll();
            break;
        }
        case 6:
        {
            tt.print_troll();
            break;
        }

        }
    }
    while (wybor!=11);




}

