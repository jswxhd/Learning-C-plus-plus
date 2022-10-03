#include <iostream>

int main(void)
{
	using namespace std;

	char choice;

	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore   p) pianist" << endl;
	cout << "t) tree        g) game" << endl;

	cin >> choice;
	while(choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
	{
		cout << "Please enter a c, p, t, or g: ";
		cin >> choice;
	}

	switch(choice)
	{
		case 'c': break;
		case 'p': break;
		case 't': cout << "A maple is a tree." << endl; break;
		case 'g': break;
	}

	return 0;
}
