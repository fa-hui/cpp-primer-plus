#include <iostream>
using namespace std;

int main(void)
{
	cout << "Enter your house built year?";
	int year;
	cin >> year;
	cin.get();

	cout << "What is its street address? ";
	char address[80];
	cin.getline(address, 80);


	return 0;
}
