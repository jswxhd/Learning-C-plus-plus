#include <iostream>
#include "vector1.h"

int main(void)
{
	using std::cout;
	using std::endl;
	using namespace VECTOR;

	Vector v1 = Vector(3, 4);
	cout << "v1: " << v1 << endl;
	v1.polar_mode();
	cout << "v1: " << v1 << endl;

	double num1 = v1;
	cout << num1 << endl;

	cout << double (v1) << endl;

	return 0;
}
