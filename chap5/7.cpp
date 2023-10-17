#include <iostream>
using namespace std;

int main(void)
{
	double arr[5] = {21.1, 32.8, 23.4, 45.2, 67.4};

	double *pt = arr;

	cout << "*++pt = " << *++pt << endl;
	cout << "++*pt = " << ++*pt << endl;
	cout << "(*pt)++ = " << (*pt)++ << endl;
	cout << "*pt = " << *pt << endl;
	cout << "*pt++ = " << *pt++ << endl;
	cout << "*pt = " << *pt << endl;

	return 0;
}
