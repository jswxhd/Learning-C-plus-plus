#include <iostream>

using namespace std;

const int ArSize = 10;

int enter(int arr[], int n);
void show(const int arr[], int n);
void report(const int arr[], int n);

int main(void)
{
	int scores[ArSize];

	int size = enter(scores, ArSize);
	show(scores, size);
	report(scores, size);

	return 0;
}

int enter(int arr[], int n)
{
	int score;
	int size = 0;

	cout << "Please enter your scores, <q> to quit:" << endl;
	while(size < n)
	{
		cout << "Score #" << size + 1 << ": ";
		if(!(cin >> score))
			break;

		arr[size] = score;
		size++;
	}

	return size;
}

void show(const int arr[], int n)
{
	if(n == 0)
	{
		cout << "No score recorded!" << endl;
		return;
	}

	cout << n << " scores recorded, separated by ||:" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i];
		if(i < n-1)
			cout << " || ";
	}

	cout << endl;
}

void report(const int arr[], int n)
{
	if(n == 0)
		return;

	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += arr[i];

	double avg = 1.0 * sum / n;
	cout << "Your average score = " << avg << endl;
}
