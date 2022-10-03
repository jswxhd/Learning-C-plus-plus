#include <iostream>
#include <string>
#include <cstring>
#include "person.h"

using namespace std;

Person::Person(const string &ln, const char *fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const
{
	std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << lname << ", " << fname << std::endl;
}
