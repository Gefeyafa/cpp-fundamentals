#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, int> edades;

	edades["Carlos"] = 25;
	edades["Ana"] = 30;
	edades["Pedro"] = 40;

	cout << "Edad de Ana: " << edades["Ana"] << endl;
	cout << endl;

	for (const auto& elemento : edades)
	{
		cout << elemento.first << ": " << elemento.second << endl;
	}

	return 0;
}
