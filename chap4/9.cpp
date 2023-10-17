#include <iostream>
using namespace std;

int main(void)
{
	int updates = 6;
	int *p_updates;

	p_updates = &updates;

	cout << "value: updates = " << updates << endl;
	cout << "p_updates = " << p_updates << endl;
	cout << "Address: &updates = " << &updates << endl;
	cout << "*p_updates = " << *p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "value: updates = " << updates <<endl;

	return 0;
}
