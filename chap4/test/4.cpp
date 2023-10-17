#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
	string str1, str2;
	cout << "Enter your first name: ";
	cin >> str1;

	cout << "Enter your last name: ";
	cin >> str2;
	cout << "Here's the information in a single string: " << str2 << ", " << str1 << endl;

	return 0;
}
