#include <iostream>
using namespace std;

int main(void)
{
	cout << "Enter the starting coundown value: ";
	int limit;
	cin >> limit;

	int i;
	for(i=limit; i; i--)
		cout <<"i = " << i << endl;
	cout << "Done, now that i = " << i << endl;

	return 0;
}
