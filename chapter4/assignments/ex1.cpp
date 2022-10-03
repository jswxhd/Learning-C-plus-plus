#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	cout << "What is your first name? ";
	string fname;
	getline(cin, fname);

	cout << "What is your last name? ";
	string lname;
	getline(cin, lname);

	cout << "What letter grade do you deserve? ";
	char letter;
	cin >> letter;

	cout << "WHat is your age? ";
	int age;
	cin >> age;
	cin.get(); //discard ENTER

	cout << "Name: " << lname << ", " << fname << endl;
	letter = letter + 1;
	cout << "Grade: " << letter << endl;
	cout << "Age: " << age << endl;

	return 0;
}
