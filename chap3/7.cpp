#include <iostream>
using namespace std;

const double GALLON_TO_LITRE = 3.875;
const double HKM_TO_MILE = 62.14;

int main(void)
{
	double fuel_consume_eur, fuel_consume_us;
	cout << "Enter the fuel consume in europe(L/100km):  ";
	cin >> fuel_consume_eur;

	fuel_consume_us = (GALLON_TO_LITRE * HKM_TO_MILE) / fuel_consume_eur;
	cout << "The fuel consume is " << fuel_consume_us << " mile/gallon." << endl;

	return 0;
}
