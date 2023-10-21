#include <iostream>
#include <ctime>
using namespace std;

int main(void)
{
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;

	clock_t delay = secs * CLOCKS_PER_SEC;
	clock_t start = clock();

	while(clock() - start < delay);

	cout << "Done!\n";

	return 0;
}
