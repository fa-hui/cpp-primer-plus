#include <iostream>
using namespace std;

int main(void)
{
	char ch;
	int count = 0;

	cout << "Enter characters, enter # to quit: " << endl;
	cin.get(ch);

	while(ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl;
	cout << count << " characters read " << endl;

	return 0;
}
