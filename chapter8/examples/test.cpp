#include <iostream>

using namespace std;

int main(void)
{
	int a = 10;
	int b = 20;

//	int &c = a;
//	int &d = 10;
//	int &d = (a + b);

	const int &d = 10;
	const int &c = (a + b);

	int &&x = 10;
	int &&y = (a + b);

	return 0;
}
