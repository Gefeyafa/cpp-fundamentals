#include <iostream>
#include <string>

using namespace std;

void mostrarTexto(string& texto)
{
    cout << "Texto: " << texto << endl;
}

void convertirTextoAMayusculas(string& texto)
{
    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            texto[i] -= 32;
        }
    }
}

void convertirTextoAMinusculas(string& texto)
{
    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] += 32;
        }
    }
}

void contarVocales(string texto)
{
    int numeroVocales = 0;

    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] == 'a' || texto[i] == 'A' ||
            texto[i] == 'e' || texto[i] == 'E' ||
            texto[i] == 'i' || texto[i] == 'I' ||
            texto[i] == 'o' || texto[i] == 'O' ||
            texto[i] == 'u' || texto[i] == 'U')
        {
            numeroVocales++;
        }
    }

    cout << "El numero de vocales es de: " << numeroVocales << endl;

}

void contarConsonantes(string texto)
{
    int numeroConsonantes = 0;

    for (int i = 0; i < texto.size(); i++)
    {
        if ((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z'))
        {
            if (texto[i] != 'a' && texto[i] != 'A' &&
                texto[i] != 'e' && texto[i] != 'E' &&
                texto[i] != 'i' && texto[i] != 'I' &&
                texto[i] != 'o' && texto[i] != 'O' &&
                texto[i] != 'u' && texto[i] != 'U')
            {
                numeroConsonantes++;
            }
        }
    }

    cout << "El numero de consonantes es de: " << numeroConsonantes << endl;

}

void contarPalabras(string texto)
{
    int numeroPalabras = 0;

    if (texto[0] != ' ')
    {
        numeroPalabras++;
    }

    for (int i = 1; i < texto.size(); i++)
    {
        if (texto[i] == 0 && ((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z')))
        {
            numeroPalabras++;
        }
        else if (texto[i - 1] == ' ' && ((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z')))
        {
            numeroPalabras++;
        }
    }

    cout << "El numero de palabras es: " << numeroPalabras << endl;
}

void buscarPalabra(string texto)
{
    string palabra;
    size_t posicion;

    cout << "Escribe la palabra que desea buscar: ";
    getline(cin, palabra);

    posicion = texto.find(palabra);

    if (palabra.size() == 0)
    {
        cout << "No se ingreso una palabra." << endl;
    }
    else if (posicion != string::npos)
    {
        cout << "Palabra encontrada en la posicion: " << posicion << endl;
    }
    else
    {
        cout << "La palabra " << palabra << " no fue encontrada." << endl;
    }

}

void reemplazarPalabra(string& texto)
{
    string palabra, nuevaPalabra;
    size_t posicion;

    cout << "Que palabra desea reemplazar: ";
    getline(cin, palabra);

    cout << "Que palabra desea agregar: ";
    getline(cin, nuevaPalabra);

    cout << endl;

    posicion = texto.find(palabra);

    if (posicion != string::npos)
    {
        texto.replace(posicion, palabra.size(), nuevaPalabra);
    }
    else
    {
        cout << "La palabra " << palabra << " no fue encontrada." << endl;
    }

    cout << "Texto: " << texto << endl;
}

void invertirTexto(string& texto)
{
    char letraTemporal;

    for (int i = 0; i < texto.size() / 2; i++)
    {
        letraTemporal = texto[i];
        texto[i] = texto[texto.size() - 1 - i];
        texto[texto.size() - 1 - i] = letraTemporal;
    }

    cout << "El texto se ha invertido: " << texto << endl;
}

void agregarTextoAlFinal(string& texto)
{
    string nuevoTexto;

    cout << "Escriba el texto que desea agregar al final: ";
    getline(cin, nuevoTexto);

    texto.append(" ");
    texto.append(nuevoTexto);
}

void extraerTexto(string texto)
{
    size_t posicionInicial, cantidad;

    cout << "Digite la posicion inicial: ";
    cin >> posicionInicial;

    cout << "Digite la cantidad de caracteres que desea extraer: ";
    cin >> cantidad;
    cin.ignore();

    if (posicionInicial < texto.size())
    {
        cout << "Texto extraido es: " << texto.substr(posicionInicial, cantidad) << endl;
    }
    else
    {
        cout << "Posicion no valida" << endl;
    }

}

void eliminarTexto(string& texto)
{
    size_t posicionInicial, cantidad;

    cout << "Digite la posicion inicial: ";
    cin >> posicionInicial;

    cout << "Digite la cantidad de caracteres que desea borrar: ";
    cin >> cantidad;
    cin.ignore();

    if (posicionInicial < texto.size())
    {
        texto.erase(posicionInicial, cantidad);
    }
    else
    {
        cout << "Posicion no valida" << endl;
    }

}

int main()
{
    string texto;
    int opcion;

    cout << "Escriba un texto: ";
    getline(cin, texto);

    if (texto.size() == 0)
    {
        cout << "No se ha escrito nada, por favor vuelva a ejecutar el programa" << endl;
    }
    else
    {

        do
        {
            cout << "========== EDITOR DE TEXTO ==========" << endl;
            cout << endl;
            cout << "Texto actual: " << endl;
            cout << texto << endl;
            cout << endl;
            cout << "1. Mostrar texto" << endl;
            cout << "2. Convertir texto a MAYUSCULAS" << endl;
            cout << "3. Convertir texto a minusculas" << endl;
            cout << "4. Contar vocales" << endl;
            cout << "5. Contar consonantes" << endl;
            cout << "6. Contar palabras" << endl;
            cout << "7. Buscar palabra" << endl;
            cout << "8. Reemplazar palabra" << endl;
            cout << "9. Invertir texto" << endl;
            cout << "10. Agregar texto al final" << endl;
            cout << "11. Extraer parte del texto" << endl;
            cout << "12. Eliminar parte del texto" << endl;
            cout << "13. Salir" << endl;
            cout << endl;
            cout << "Seleccine una opcion: ";
            cin >> opcion;
            cin.ignore();

            switch (opcion)
            {
            case 1:

                mostrarTexto(texto);
                break;

            case 2:

                convertirTextoAMayusculas(texto);
                break;

            case 3:

                convertirTextoAMinusculas(texto);
                break;

            case 4:

                contarVocales(texto);
                break;

            case 5:

                contarConsonantes(texto);
                break;

            case 6:

                contarPalabras(texto);
                break;

            case 7:

                buscarPalabra(texto);
                break;

            case 8:

                reemplazarPalabra(texto);
                break;

            case 9:

                invertirTexto(texto);
                break;

            case 10:
                agregarTextoAlFinal(texto);

                break;

            case 11:

                extraerTexto(texto);
                break;

            case 12:

                eliminarTexto(texto);
                break;

            case 13:

                break;

            default:

                cout << "No es una opcion valida" << endl;
                break;
            }

        } while (opcion != 13);
    }

    return 0;
}
