#include <iostream>

int main(void)
{
	using namespace std;

	int arr[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

	cout << "Doing it right:" << endl;
	int i;
	for(i = 0; arr[i] == 20; i++)
		cout << "arr " << i << " is a 20." << endl;

	cout << "Doing it dangerously wrong: " << endl;
	for(int i = 0; arr[i] = 20; i++)
		cout << "arr " << i << " is a 20." << endl;

	return 0;
}
