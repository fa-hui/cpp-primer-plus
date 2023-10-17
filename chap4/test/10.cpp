#include <iostream>
#include <array>
using namespace std;

int main(void)
{
	array<double, 3> arr1;
	cout << "Enter your grade of 40m: " << endl;
	cin >> arr1[0];
	cin >> arr1[1];
	cin >> arr1[2];

	double arr2;

	arr2 = (arr1[0]+arr1[1]+arr1[2])/3;

	cout << arr2 << endl;

	return 0;
}
