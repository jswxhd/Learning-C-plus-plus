#include <iostream>

int y2m(int age);

int main(void)
{
	using namespace std;

	cout << "Enter your age: ";
	int age;
	cin >> age;
	int month;
	month = y2m(age);
	cout << "age " << age << " includes " << month << " months." << endl;
	return 0;
}

int y2m(int age)
{
	return age * 12;
}
