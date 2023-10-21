#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	const string Month[] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
	int sale_number[12];
	int sum = 0;

	for(int i = 0; i < 12; i++)
	{
		cout << "Enter the sale number of " << Month[i] << ": ";
		cin >> sale_number[i];
	}

	cout << "Input Done!" << endl;

	for(int i = 0; i< 12; i++)
	{
		sum +=sale_number[i];
	}

	cout << "All sale = " << sum << endl;


	return 0;
}
