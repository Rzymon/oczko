#include <string>
#include <vector>
#include <iostream> //STD I CALE TO BADZIEWIE
#include <algorithm> // DO MIESZANIA TALII
#include <iomanip> //DO SETW()

#include "Troll.h"

Troll::Troll()
{
    counter = 1;
}

void Troll::print_troll()
{
    char fool;
switch(counter)
{
case 1:
    system("clear");
    cout << "Naiwniak... Na prawde myslales, ze student pierwszego roku zrobi taki dobry program?" << endl;
    cout << "Nacisnij, dowolny klawisz, potem nacisnij Enter i nie rob wiecej scen..." << endl;
    cin >> fool;
    break;
case 2:
    cout << "Doceniam, ze wierzysz w moje mozliwosci, ale tu tez nie znajdziesz nic" << endl;
    cout << "Jak wczesniej: dowolny klawisz, Enter i odpusc sobie, na prawde" << endl;
    cin >> fool;
    break;
case 3:
    cout << "Zaczynasz mnie powoli denerwowac. Myslisz ze ta opcja dziala jak tamte nie dzialaly?" << endl;
    cin >> fool;
    break;
counter++;
}
}

Troll::~Troll()
{

}
