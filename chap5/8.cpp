#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	cout << "please enter a word: ";
	string word;
	cin >> word;
	int i, j;
	char tmp;

	for(j = 0, i = word.size()-1; j<i; j++, i--)
	{
		tmp = word[i];
		word[i] = word[j];
		word[j] = tmp;
	}

	cout << word << endl;

	return 0;
}
