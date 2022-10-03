#include <iostream>

int stone2lb(int sts);

int main(void)
{
	using namespace std;

	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;

	int pounds = stone2lb(stone);

	cout << stone << " stone = "; 
	cout << pounds << " pounds." << endl;

	return 0;
}

// 1 stone = 14lbs
int stone2lb(int sts)
{
//	int pounds = 14 * sts;
//	return pounds;
	return 14 * sts;
}
