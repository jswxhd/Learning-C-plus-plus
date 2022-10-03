#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

Golf::Golf()
{
}

Golf::Golf(const char * name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

int Golf::setgolf(void)
{
	char name[Len];
	int hc;

	cout << "Enter the full name: ";
	if(!(cin.get(name, Len)))
		return 0;
	cout << "Enter the handicap: ";
	(cin >> hc).get();

	Golf tmp_golf = Golf(name, hc);
	*this = tmp_golf;

	return 1;
}

void Golf::sethandicap(int hc)
{
	handicap = hc;
}

void Golf::showgolf(void) const
{
	cout << "Name: " << fullname << ", Handicap: " << handicap << endl;
}
