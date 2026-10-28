#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> numeros;

    numeros.push(10);
    numeros.push(20);
    numeros.push(30);
    numeros.push(40);

    cout << "Elemento superior antes: " << numeros.top() << endl;
    cout << "Cantidad de elementos antes: " << numeros.size() << endl;

    numeros.pop();

    cout << "Elemento superior despues: " << numeros.top() << endl;
    cout << "Cantidad de elementos despues: " << numeros.size() << endl;

    return 0;
}
