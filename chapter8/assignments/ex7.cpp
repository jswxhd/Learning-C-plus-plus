#include <iostream>

using namespace std;

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T *arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main(void)
{
	int things[6] = {13, 31, 103, 301, 310, 130};

	struct debts mr_E[3] =
	{
		{"Rick", 2400.00},
		{"Jack", 1300.0},
		{"Rose", 1800.0}
	};

	double * pd[3];
	for(int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	int sum1 = SumArray(things, 6);
	cout << "summation of things = " << sum1 << endl;

	double sum2 = SumArray(pd, 3);
	cout << "summation of debts = " << sum2 << endl;

	return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
	T sum = 0;

	for(int i = 0; i < n; i++)
		sum +=  arr[i];

	return sum;
}

template <typename T>
T SumArray(T *arr[], int n)
{
	T sum = 0.0;

	for(int i = 0; i < n; i++)
		sum +=  *arr[i];

	return sum;
}
