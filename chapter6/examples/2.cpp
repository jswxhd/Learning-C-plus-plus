#include <iostream>

int main(void)
{
	using namespace std;

	char ch;

	cin.get(ch);
	while(ch != '.')
	{
		if(ch == '\n')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);
	}

	cout << endl;
	cout << "Please excuse the slight confusion." << endl;

	return 0;
}
