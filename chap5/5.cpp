#include <iostream>
using namespace std;

int main(void)
{
	cout << "Enter an integer: ";
	int by;
	cin >> by;
	cout << "counting by " << by << endl;

	for(int i = 0; i < 100; i = i + by)
		cout << i << endl;

	return 0;
}
