#include <string>
#include <vector>
#include <iostream> //STD I CALE TO BADZIEWIE
#include <algorithm> // DO MIESZANIA TALII
#include <iomanip> //DO SETW()

#include "Troll.h"

Troll::Troll()
{
 counter = 0;
}

void Troll::print_troll()
{
    char fool;

if(counter<6)
{
switch(counter)
{
case 1:
    system("clear");
    cout << "Naiwniak... Na prawde myslales, ze student pierwszego roku zrobi taki dobry program?" << endl;
    cout << "Nacisnij, dowolny klawisz, potem nacisnij Enter i nie rob wiecej scen..." << endl;
    cin >> fool;
    break;
case 2:
    system("clear");
    cout << "Doceniam, ze wierzysz w moje mozliwosci, ale tu tez nie znajdziesz nic" << endl;
    cout << "Jak wczesniej: dowolny klawisz, Enter i odpusc sobie, na prawde" << endl;
    cin >> fool;
    break;
case 3:
    system("clear");
    cout << "Zaczynasz mnie powoli denerwowac. Myslisz ze ta opcja dziala jak tamte nie dzialaly?" << endl;
    cin >> fool;
    break;
case 4:
    system("clear");
    cout << "Mozemy sie tak wiecznie bawic, ale widze, ze Ty wolisz sluchac mnie, niz grac... Pewnie normalnie tez katujesz menu glowne w grach" << endl;
    cout << "Jak wczesniej:  "; cin >> fool;
    break;
case 5:
    system("clear");
    cout << "Daj spokoj  "; cin >> fool;
    break;
}
}
    else
    {
        system("clear");
        cout << "Koniec zartow, masz grac!   "; cin >> fool;
    }
counter++;
}

Troll::~Troll()
{

}
