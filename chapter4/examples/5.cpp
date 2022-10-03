#include <iostream>

int main(void)
{
	using namespace std;

	const int ArSize = 20;

	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: " << endl;
//	cin.get(name, ArSize);
//	cin.get(); // read ENTER
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert: " << endl;
	cin.get(dessert, ArSize);

	cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

	return 0;
}
