#include <iostream>
#include <string>
using namespace std;

int main(void)
{
//	const int ArSize = 20;
	string name;
	string dessert;

	cout << "Enter your name: \n";
	getline(cin, name);
	cout << "Enter your favorate dessert: \n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
