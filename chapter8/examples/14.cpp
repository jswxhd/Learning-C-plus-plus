#include <iostream>

using namespace std;

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T *arr[], int n);

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

	ShowArray(things, 6);

	ShowArray(pd, 3);

	return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
	cout << "template A:" << endl;

	for(int i = 0; i < n; i++)
		cout << arr[i] << ' ';

	cout << endl;
}

template <typename T>
void ShowArray(T *arr[], int n)
{
	cout << "template B:" << endl;

	for(int i = 0; i < n; i++)
		cout << *arr[i] << ' ';

	cout << endl;
}
