#include <iostream>

using namespace std;

enum class Dificultad
{
    Facil,
    Normal,
    Dificil
};

int main()
{
    Dificultad dificultad = Dificultad::Normal;

    if (dificultad == Dificultad::Facil)
    {
        cout << "Dificultad: Facil" << endl;
    }
    else if (dificultad == Dificultad::Normal)
    {
        cout << "Dificultad: Normal" << endl;
    }
    else
    {
        cout << "Dificultad: Dificil" << endl;
    }

    return 0;
}