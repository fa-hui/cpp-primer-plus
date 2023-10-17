
#include <iostream>
#include <string>
using namespace std;

struct william
{
	string name;
	double diameter;
	double wight;
};

int main(void)
{
	william *np = new william;

	cout << "Enter your diameter: ";
	cin >> (*np).diameter;
	cin.get();

	cout << "Enter your name: ";
	getline(cin, (*np).name);

	cout <<"Enter your wight: ";
	cin >> (*np).wight;

	cout << (*np).name << " " << (*np).diameter << " " << (*np).wight << endl;

	delete np;

	return 0;
}
