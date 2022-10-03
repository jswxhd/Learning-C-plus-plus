#include <iostream>
#include <cstring>
#include "cd.h"

using namespace std;

Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
        strcpy(performers, d.performers);
        strcpy(label, d.label);
        selections = d.selections;
        playtime = d.playtime;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}

Classic::Classic() : Cd()
{
	lead = nullptr;
}

Classic::Classic(const char *l, const char *s1,
		 const char *s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	lead = new char[strlen(l) + 1];
	strcpy(lead, l);
}

Classic::Classic(const Classic &c) : Cd(c)
{
        lead = new char[strlen(c.lead) + 1];
        strcpy(lead, c.lead);
}

Classic::~Classic()
{
	delete [] lead;
}

void Classic::Report() const
{
	cout << "Lead single: " << lead << endl;
	Cd::Report();
}

Classic & Classic::operator=(const Classic &c)
{
	if(this == &c)
		return *this;
	Cd::operator=(c);
	delete [] lead;
        lead = new char[strlen(c.lead) + 1];
        strcpy(lead, c.lead);
	return *this;
}
