#include <iostream>

using namespace std;

int main()
{
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Has vivido aproximadamente:" << endl;
    cout << edad * 12 << " meses" << endl;
    cout << edad * 365 << " dias" << endl;

    return 0;
}

