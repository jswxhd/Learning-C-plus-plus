#include <iostream>
#include <cstring>

int main(void)
{
	using namespace std;

	cout << "Enter your first name: ";
	char fname[20];
	cin.getline(fname, 20);

	cout << "Enter your last name: ";
	char lname[20];
	cin.getline(lname, 20);

	char name[20];
	strcpy(name, lname); //copy lname to name
	strcat(name, ", "); //append
	strcat(name, fname);
	cout << "Here's the information in a single string: " << name << endl;

	return 0;
}
