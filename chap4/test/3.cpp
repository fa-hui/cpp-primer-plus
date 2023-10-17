#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	const int ArSize = 20;
	char first_name[ArSize];
	char last_name[ArSize];
	char ch1[ArSize], ch2[ArSize];
	cout << "Enter your first name: ";
	cin >> first_name;
	strcpy(ch1, first_name);

	cout << "Enter your last name: ";
	cin >> last_name;
	strcpy(ch2, last_name);

	cout << "Here's the information in a single string: " << ch2 << ", " << ch1 << endl;

	return 0;
}
