#include <iostream>
#include <string>
using namespace std;

const int ArSize = 150;

int main(void)
{
	string str1;
	const string str2 = "done";

	cout << "Enter words (to stop type the word done) : " << endl;
	getline(cin, str1);
	while(str1 != str2)
		getline(cin, str1);
		

	return 0;
}
