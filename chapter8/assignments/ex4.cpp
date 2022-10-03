#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
	char * str;
	int ct;
};

void set(stringy &sy, char str[]);
void show(const stringy &sy, int times = 1);
void show(const char *str, int times = 1);

int main(void)
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);

	show(beany);
	show(beany, 2);

	delete [] beany.str;

	testing[0] = 'D';
	testing[1] = 'u';

	show(testing);
	show(testing, 3);
	show("Done!");

	return 0;
}

void set(stringy &sy, char str[])
{
	int n = strlen(str);
//	char *pt = new char[n + 1];
//	sy.str = pt;
//	strcpy(pt, str);
	sy.str = new char[n + 1];
	strcpy(sy.str, str);
	sy.ct = n;

//	delete [] pt;
}

void show(const stringy &sy, int times)
{
	for(int i = 0; i < times; i++)
		cout << sy.str << endl;
}

void show(const char *str, int times)
{
	for(int i = 0; i < times; i++)
		cout << str << endl;
}
