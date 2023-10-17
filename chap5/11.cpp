#include <iostream>
using namespace std;

const int ArSize = 20;

int main(void)
{
	char name[ArSize];
	cout << "Enter your first name please: ";
	cin >> name;

	cout << "Here is your name: " << endl;
	int i = 0;
	while(name[i] != '\0')
	{
		cout << name[i] << " : " << (int)name[i] << endl;
		i++;
	}

	return 0;
}
