#include <iostream>

int main(void)
{
	using namespace std;

	int cheat = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "cheat = " << cheat << " (in dec)." << endl;

	cout << hex; //modify cout number format
	cout << "waist = " << waist << " (in hex)." << endl;

	cout << oct;
	cout << "inseam = " << inseam << " (in oct)." << endl;

	return 0;
}
