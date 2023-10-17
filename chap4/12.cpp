#include <iostream>
using namespace std;

int main(void)
{
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};

	double *pw = wages;
	short *ps = &stacks[0];

//	cout << pw << " " << ps << endl; 

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer." <<endl;

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;

	cout << "add 1 to the ps poniter." << endl;
	cout << "ps = " << ps << ", *ps = " << *ps <<endl;
	cout << "stacks[0]  = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	cout << "*stacks = " << *stacks << "*(stacks+1) = " << *(stacks+1) << endl;

	cout << "Size of wages array = " << sizeof(wages) << endl;
	cout << "Size of pw poniter = " << sizeof(pw) << endl;

	return 0;
}
