#include <iostream>
#include <array>
using namespace std;

int main(void)
{
	array<long double, 102> arr1;
	arr1[0]=arr1[1]=1;

	int integer;
	cout << "Enter a integer: ";
	cin >> integer;

	for(int i = 2; i <= integer; i++)
	{
		arr1[i] = i*arr1[i-1];
	}

	cout << "The " << integer << "! = " << arr1[integer] << endl;

	return 0;
}
