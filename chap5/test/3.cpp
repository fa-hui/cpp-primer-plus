#include <iostream>
using namespace std;

int main(void)
{
	cout << "Enter an integer from your keyboard: ";
	double i;
	double sum = 0;

	cin >> i;

	while(i != 0)
	{
		sum = sum + i;
		cout << "Now, sum = " << sum << endl;
		cout << "please enter an integer again: ";
		cin >> i;
	}

	cout << "Now, the game is over and sum = " << sum << endl;

	return 0;
}
