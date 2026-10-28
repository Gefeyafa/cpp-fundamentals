#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> numeros;

    numeros.push(10);
    numeros.push(20);
    numeros.push(30);
    numeros.push(40);

    cout << "Antes: " << endl;
    cout << "front(): " << numeros.front() << endl;
    cout << "back(): " << numeros.back() << endl;
    cout << "size(): " << numeros.size() << endl;
    cout << endl;

    numeros.pop();

    cout << "Despues: " << endl;
    cout << "front(): " << numeros.front() << endl;
    cout << "size(): " << numeros.size() << endl;

    return 0;
}