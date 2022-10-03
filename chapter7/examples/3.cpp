#include <iostream>

using namespace std;

void n_chars(char c, int n);

int main(void)
{
	cout << "Enter a character: ";
	char ch;
	cin >> ch; // cin.get()

	int times;
	while(ch != 'q')
	{
		cout << "Enter a integer: ";
		cin >> times;

		n_chars(ch, times);
		cout << endl;
		cout << "times = " << times << endl; // times won't change
		cout << "Enter another integer or press <q> to quit: ";
		cin >> ch;
	}

	return 0;
}

void n_chars(char c, int n)
{
	while(n-- > 0)
		cout << c;
}
