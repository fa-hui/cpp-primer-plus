#include <iostream>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(void)
{
	inflatable *ps = new inflatable;
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price $";
	cin >> ps->price;

	cout << "Name: " << (*ps).name << endl;
	cout << "vloume: " << ps->volume << endl;
	cout << "price: $" << ps->price << endl;

	delete ps;

	return 0;
}
