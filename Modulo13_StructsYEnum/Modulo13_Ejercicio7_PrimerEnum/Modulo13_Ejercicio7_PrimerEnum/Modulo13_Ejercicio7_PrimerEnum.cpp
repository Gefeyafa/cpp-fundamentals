#include <iostream>

using namespace std;

enum Dificultad
{
    Facil,
    Normal, 
    Dificil
};

int main()
{
    Dificultad dificultad = Normal;

    if (dificultad == Facil)
    {
        cout << "Dificultad: Facil" << endl;
    }
    else if (dificultad == Normal)
    {
        cout << "Dificultad: Normal" << endl;
    }
    else
    {
        cout << "Dificultad: Dificil" << endl;
    }

    return 0;
}
