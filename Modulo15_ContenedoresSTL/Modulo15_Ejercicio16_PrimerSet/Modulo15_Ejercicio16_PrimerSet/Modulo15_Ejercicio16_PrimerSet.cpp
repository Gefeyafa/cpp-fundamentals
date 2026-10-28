#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> numeros;

    numeros.insert(10);
    numeros.insert(20);
    numeros.insert(10);
    numeros.insert(30);
    numeros.insert(20);
    numeros.insert(40);

    cout << "size(): " << numeros.size() << endl; //mostrar size()
    cout << endl;

    for (int numero : numeros) //recorrer set con range-based for
    {
        cout << numero << " ";
    }
    cout << endl << endl;

    if (numeros.find(30) != numeros.end()) //buscar numero 30 usando find()
    {
        cout << "Numero 30 existe" << endl;
    }
    else
    {
        cout << "Numero 30 no existe" << endl;
    }
    cout << endl;

    numeros.erase(20); // eliminar 20 con erase()

    for (int numero : numeros) //volver a mostrar todo
    {
        cout << numero << " ";
    }

    return 0;
}