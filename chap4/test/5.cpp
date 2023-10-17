#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string brand;
	double wight;
	int calorie;
};

int main(void)
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};

	cout << "brand = " << snack.brand << endl;
	cout << "weight = " << snack.wight << endl;
	cout << "calorie = " << snack.calorie << endl;

	return 0;
}
