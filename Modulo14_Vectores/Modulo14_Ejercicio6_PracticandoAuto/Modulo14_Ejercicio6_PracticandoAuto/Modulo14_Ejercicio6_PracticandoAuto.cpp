#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> precios;
    int articulos;
    double costo;
    double precioTotal = 0;

    cout << "Ingrese la cantidad de articulos: ";
    cin >> articulos;

    for (int i = 0; i < articulos; i++)
    {
        cout << "Articulo " << i + 1 << ": ";
        cin >> costo;
        precios.push_back(costo);
    }
    cout << endl;

    cout << "Precios: " << endl;
    for (const auto& precio : precios)
    {
        cout << precio << endl;
    }
    cout << endl;

    for (const auto& precio : precios)
    {
        precioTotal += precio;
    }

    cout << "Precio total: " << precioTotal << endl;

    return 0;
}
