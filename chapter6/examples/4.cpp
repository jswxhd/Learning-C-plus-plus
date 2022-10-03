#include <iostream>

using namespace std;

int main(void)
{
	cout << "This program may reformat your hard disk, and destroy all your data." << endl;
	cout << "Do you wish to continue? <y/n>" << endl;

	char ch;
	cin >> ch;

	if(ch == 'y' || ch == 'Y')
		cout << "You were warned!" << endl;
	else if(ch == 'n' || ch == 'N')
		cout << "A wise choice ...." << endl;
	else
		cout << "That's wasn't a y or n! Can't follow your instruction." << endl;

	return 0;
}
