#include <iostream>
using namespace std;

int main(void)
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: ";
	cin.getline(name, ArSize);
	cout << "Enter your favorite dessert: ";
	cin.getline(dessert, ArSize);

	cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

	return 0;
}
