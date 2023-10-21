#include <iostream>
using namespace std;

const int INTEGER = 100;

int main(void)
{
	double da=INTEGER;
	double cl=INTEGER;
	const double I1 = 0.10;
	const double I2 = 0.05;

	while(da >= cl)
	{
		da = da + INTEGER*I1;
		cl = cl + cl*I2;
	}

	cout << "Now, the Cleo's number > Daphne's number and Cleo's number is " << cl << ", Daphne's number is " << da << endl;

	return 0;
}
