#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	const int SIZE = 15;

	char name1[SIZE];
	char name2[SIZE] = "C++owboy";

	cout << "Howdy!I'm " << name2 << ". what's your name? " <<endl;
	cin >> name1;

	cout << "Well. " << name1 << ", your name has " << strlen(name1) << " letters." << endl;
	cout<< "And your name is stored in an array of " << sizeof name1 << " bytes." << endl;

	return 0;
}
