#include <iostream>
#include <array>

int main(void)
{
	using namespace std;

	array<double, 3> grades;

	cout << "Enter your first grade: ";
	cin >> grades[0];

	cout << "Enter your second grade: ";
	cin >> grades[1];

	cout << "Enter your third grade: ";
	cin >> grades[2];

	double avg = (grades[0] + grades[1] + grades[2]) / 3;
	cout << "Your average grade is " << avg << " seconds.\n"; 

	return 0;
}
