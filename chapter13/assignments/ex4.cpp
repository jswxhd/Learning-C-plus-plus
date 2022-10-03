#include "port.h"

using namespace std;

int main(void)
{
	Port p1("Gin", "tawny", 5);
	cout << p1 << endl;
	p1.Show();
	cout << endl;

	VintagePort vp1("Whisky", "vintage", 5, "wk", 7);
	cout << vp1 << endl;
	vp1.Show();

	vp1 += 3;
	cout << vp1 << endl;
	vp1 -= 10;
	cout << vp1 << endl;

	VintagePort vp2;
	vp2 = vp1;
	vp2.Show();

	return 0;
}
