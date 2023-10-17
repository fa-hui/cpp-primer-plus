#include <iostream>
using namespace std;

struct years
{
	int year;
};

int main(void)
{
	years s01,s02,s03;
	s01.year = 1998;

	years *pa = &s02;
	pa->year = 1999;

	years trio[3];
	trio[0].year = 2003;
	cout << trio->year << endl;

	const years *arp[3] = {&s01, &s02, &s03};
	cout << arp[1]->year <<endl;

	const years **ppa = arp;
	cout << (*ppa)->year << endl;

	auto ppb = arp;
	cout << (*(ppb+1))->year << endl;

	return 0;
}
