#include <iostream>
using namespace std;

const int Year = 3;
const int Mounth = 12;


int main(void)
{
	string mounth[] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
	int sale_year[Year][Mounth];
	int sum = 0;

	for(int i = 0; i < 3; i++)
	{
		cout << "The " << i+1 << " year sale: \t" << endl;
		for(int j = 0; j < 12; j++)
		{
			cout << mounth[j] << " : ";
			cin >> sale_year[i][j];
		}
	}

	for(int i = 0; i<Year; i++)
	{
		for(int j = 0; j < Mounth; j++)
		{
			sum += sale_year[i][j];
		}
	}

	cout << "sum = " << sum;
	return 0;

}
