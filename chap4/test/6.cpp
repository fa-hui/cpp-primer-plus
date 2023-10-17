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
	CandyBar snack[3];

	snack[0] = {"Mocha Munch", 2.3, 350};
	snack[1] = {"Mocha Munch", 2.3, 350};
	snack[2] = {"Mocha Munch", 2.3, 350};

	cout << snack[0].brand << " " <<snack[1].wight << " "<< snack[2].calorie << endl;
	cout << snack[1].wight << endl;
	cout << snack[2].calorie << endl;

	return 0;
}
