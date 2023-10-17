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
	william np;
	cout << "Enter your name: ";
	getline(cin, np.name);

	cout << "Enter your diameter: ";
	cin >> np.diameter;

	cout << "Enter your wight: ";
	cin >> np.wight;

	cout << " Name = " << np.name << " "<< " diameter = " << np.diameter << " " << "wight = " << np.wight << " " << endl;

	return 0;
}
