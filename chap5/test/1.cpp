#include <iostream>
using namespace std;

int main(void)
{
	cout << "Enter two integer " << endl;

	int a, b;
	int sum = 0;
	cout << "Enter your first integer: ";
	cin >> a;
	cout << "Enter  your second integer:";
	cin >> b;

	for(int i = a; i<=b; i++)
	{
		sum = sum + i;
	}

	cout << "sum = " << sum << endl;

	return 0;
}
