#include <iostream>
#include <cstring>
#include "cd2.h"

using namespace std;

Cd::Cd()
{
	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0.0;
}

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	performers = new char[strlen(d.performers) + 1];
        strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
        strcpy(label, d.label);
        selections = d.selections;
        playtime = d.playtime;
}

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}

void Cd::Report() const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd &d)
{
	if(this == &d)
		return *this;
	delete [] performers;
	delete [] label;
        performers = new char[strlen(d.performers) + 1];
        strcpy(performers, d.performers);
        label = new char[strlen(d.label) + 1];
        strcpy(label, d.label);
        selections = d.selections;
        playtime = d.playtime;
	return *this;
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
