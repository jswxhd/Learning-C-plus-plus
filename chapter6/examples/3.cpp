#include <iostream>

using namespace std;

const int Fave = 27;

int main(void)
{
	int n;

	cout << "Enter a number in the range 1-100 to find your favorite number: ";
	do
	{
		cin >> n;
		if(n < Fave)
			cout << "Too low, guess again: ";
		else if(n > Fave)
			cout << "Too high, guess again: ";
		else
			cout << Fave << " is the right number." << endl;
	}while(n != Fave);

	return 0;
}
