#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

void setgolf(golf &g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf &g)
{
	char name[Len];
	int hc;

	cout << "Enter the full name: ";
	if(!(cin.get(name, Len)))
		return 0;
	cout << "Enter the handicap: ";
	(cin >> hc).get();

	setgolf(g, name, hc);

	return 1;
}

void handicap(golf &g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf &g)
{
	cout << "Name: " << g.fullname << ", Handicap: " << g.handicap << endl;
}
