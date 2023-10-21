#include <iostream>
#include <string>
using namespace std;

struct car
{
	string producer;
	int year;
};

int main(void)
{
	int number;
	cout << "How many cars do you wish to catalog? ";
	cin >> number;

	car *p = new car[number];


	for(int i = 1; i<number+1; i++)
	{
		cout << "Car #" <<i <<endl;
		cout << "Please enter the make: ";
		cin.get();
		getline(cin, p[i-1].producer);
		cout << "Please enter the year made: ";
		cin >> p[i-1].year;
	}

	cout << "Here is your collection:" << endl;
	for(int i = 0;i < number; i++)
	{
		cout << p[i].year << " " << p[i].producer << endl;
	}

	delete [] p;

	return 0;
}
