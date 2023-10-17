#include <iostream>
using namespace std;

int main(void)
{
	const int space = 20;
	char name[space], last_name[space], letter;
	cout << "What is your first name? ";
	cin.getline(name, space);

	cout << "What is your last name? ";
	cin.getline(last_name, space);

	cout << "what letter grade do you deserve? ";
	cin >> letter;
	letter = letter + 1;

	cout << "what is your age?";
	int age;
	cin >> age;

	cout << "Name: " << last_name << ", " << name << endl;
	cout << "Grade: " << letter << endl;
	cout << "Age: " << age << endl;

	return 0;
}
