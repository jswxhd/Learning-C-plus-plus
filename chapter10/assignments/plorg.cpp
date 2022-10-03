#include <iostream>
#include <cstring>
#include "plorg.h"

using namespace std;

Plorg::Plorg(const char *name, int ci)
{
	strcpy(name_, name);
	ci_ = ci;
}

void Plorg::set_ci(double ci)
{
	ci_ = ci;
}

void Plorg::showplorg(void) const
{
	cout << "Name: " << name_ << ", CI = " << ci_ << endl;
}
