#include <iostream>
#include <string>

using namespace std;

void mostrarMensaje(const string& mensaje)
{
    cout << mensaje;
}

int main()
{
    string mensaje = "Hola mundo";

    mostrarMensaje(mensaje);


    return 0;
}