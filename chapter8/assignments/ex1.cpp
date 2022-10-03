#include <iostream>

using namespace std;

const int Call = 3;

void show(const char *str, int n = 0);

int main(void)
{
	const char *hello = "Hello, world";

	show(hello);

	show("Good morning", 8);

	return 0;
}

void show(const char *str, int n)
{
	static int num = 0;
	num++;

	if(n == 0)
		cout << str << endl;
	else
	{
		for(int i = 0; i < num; i++)
			cout << str << endl;
	}
}
