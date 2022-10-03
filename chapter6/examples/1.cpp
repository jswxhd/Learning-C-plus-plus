#include <iostream>

using namespace std;

int main(void)
{
	int spaces = 0;
	int total = 0;
	char ch;

	cin.get(ch);
	while(ch != '.')
	{
		if(ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}

	cout << "spaces = " << spaces << endl;
	cout << "total characters = " << total << endl;

	return 0;
}
