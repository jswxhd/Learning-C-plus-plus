#include <iostream>
#include <cstring>
#include <new>

using namespace std;

const int BUF = 512;
char buffer[BUF];

struct chaff
{
	char dross[20];
	int slag;
};

int main(void)
{
	chaff *pt = new(buffer) chaff[2];

	strcpy(pt[0].dross, "xyz");
	pt[0].slag = 5;
	strcpy(pt[1].dross, "abc");
	pt[1].slag = 4;

	for(int i = 0; i < 2; i++ )
		cout << "Dross: " << pt[i].dross << ", Slag: " << pt[i].slag << endl;

	return 0;
}
