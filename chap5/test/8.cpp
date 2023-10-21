#include <iostream>
#include <cstring>
using namespace std;

const int ArSize = 150;

int main(void)
{
	char ch[ArSize];
	const char Done[] = "done";

	cout << "Enter words (to stop type the word done) : " << endl;
	cin.getline(ch, 75);
	while(strcmp(ch, Done) !=0)
		cin.getline(ch, 75);
		

	return 0;
}
