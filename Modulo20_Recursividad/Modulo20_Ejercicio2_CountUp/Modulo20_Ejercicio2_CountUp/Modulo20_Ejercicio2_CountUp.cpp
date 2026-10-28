#include <iostream>

using namespace std;

void countup(int number)
{
    if (number <= 0)
    {
        return;
    }

    countup(number - 1);

    cout << number << endl;
}

int main()
{
    countup(5);

    return 0;
}