#include <iostream>

using namespace std;

const int ArSize = 10;

int fill_array(double arr[], int n);
void show_array(const double arr[], int n);
void reverse_array(double arr[], int n);

int main(void)
{
	double scores[ArSize];

	int size = fill_array(scores, ArSize);
	show_array(scores, size);

	cout << "----Reverse all the scores----" << endl;
	reverse_array(scores, size);
	show_array(scores, size);

	cout << "----Reverse all the scores but the first and the last one----" << endl;
	reverse_array(scores + 1, size - 2);
	show_array(scores, size);

	return 0;
}

int fill_array(double arr[], int n)
{
	double score;
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

void show_array(const double arr[], int n)
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

void reverse_array(double arr[], int n)
{
	if(n == 0)
		return;

	double * pt1 = arr;
	double * pt2 = arr + n - 1;
	double tmp;

	while(pt1 < pt2)
	{
		tmp = *pt1;
		*pt1 = *pt2;
		*pt2 = tmp;
		pt1++;
		pt2--;
	}
}
