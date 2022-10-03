#include <iostream>
#include <cstring>

using namespace std;

char *getname(void);

int main(void)
{
	char *name;

	name = getname();
	cout << name << " at " << (int *) name << endl;
	delete []name;

	name = getname();
	cout << name << " at " << (int *) name << endl;
	delete []name;

	return 0;
}

char *getname(void)
{
	char tmp[80];

	cout << "Enter last name: ";
	cin >> tmp;

	char *pn = new char[strlen(tmp)+1];
	strcpy(pn, tmp);

	return pn;
}
