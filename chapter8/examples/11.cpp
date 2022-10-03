#include <iostream>

using namespace std;

template <typename T>
void Swap(T &a, T &b);

int main(void)
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	Swap(i, j);
	cout << "After swap, now i, j = " << i << ", " << j << endl;

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << endl;
	Swap(x, y);
	cout << "After swap, now x, y = " << x << ", " << y << endl;

	return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
