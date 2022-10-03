#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main(void)
{
	using namespace std;
	using VECTOR::Vector;

	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	ofstream outFile;
	outFile.open("randwalk.txt");

	cout << "Enter target distance (q to quit): ";
	while(cin >> target)
	{
		cout << "Enter step length: ";
		if(!(cin >> dstep))
			break;

		outFile << "Target Distance: " << target
			<< "Step Size: " << dstep << endl;

		while(result.magval() < target)
		{
			outFile << steps << ": " << result << endl;
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		outFile << "After " << steps << " steps, the subject "
		     "has the following location:\n";
		outFile << result << endl;
		result.polar_mode();
		outFile << " or\n" << result << endl;
		outFile << "Average outward distance per step = "
		     << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}

	cout << "Bye!\n";
	cin.clear();
	while(cin.get() != '\n')
		continue;

	return 0;
}
