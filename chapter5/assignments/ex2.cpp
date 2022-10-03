#include <iostream>
#include <array>

const int ArSize = 101;

int main(void)
{
	using namespace std;

	array<long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1.0L;

	for(int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i-1];

	cout << "100! = " << factorials[100] << endl;

	return 0;
}
