#include <iostream>

using namespace std;

const int LIM = 8;

template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T a[], T b[], int n);

void show(int arr[], int n);

int main(void)
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	Swap(i, j);
	cout << "After swap, now i, j = " << i << ", " << j << endl;

	int d1[LIM] = {0, 7, 0, 4, 1, 7, 7, 6};
	int d2[LIM] = {0, 7, 2, 0, 1, 9, 6, 9};
	cout << "Original arrays: " << endl;
	show(d1, LIM);
	show(d2, LIM);

	Swap(d1, d2, LIM);
	cout << "After swap: " << endl;
	show(d1, LIM);
	show(d2, LIM);

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

template <typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for(int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void show(int arr[], int n)
{
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
