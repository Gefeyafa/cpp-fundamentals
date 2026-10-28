#include <iostream>

using namespace std;

int main()
{
    int numeroSecreto = 5;
    int numeroAdivinado = 0;

    while (numeroAdivinado != numeroSecreto)
    {
        cout << "Adivina el numero secreto: ";
        cin >> numeroAdivinado;

        if (numeroAdivinado < numeroSecreto)
        {
            cout << "Muy bajo." << endl;
        }
        else if (numeroAdivinado > numeroSecreto)
        {
            cout << "Muy alto." << endl;
        }
        else
        {
            cout << "Correcto!";
        }

    }

    return 0;
}

