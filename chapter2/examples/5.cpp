#include <iostream>
#include <cmath>

int main(void)
{
	using namespace std;
	
	double area;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;

	double size;
	size = sqrt(area);
	
	cout << "That's the equivalent of a square " << size << " feet to the side." << endl;

	return 0;
}
