#include <iostream>

int main(void)
{
	using namespace std;

	cout << "Enter number of rows: ";
	int row;
	cin >> row;

	for(int i = 1; i <= row; i++)
	{
		for(int j = 1; j <= row - i; j++)
			cout << ".";
		for(int k = 1; k <= i; k++)
			cout << "*";
		cout << endl;
	}

	return 0;
}
