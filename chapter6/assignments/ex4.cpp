#include <iostream>
#include <cstring>

using namespace std;

const int StrSize = 50;
const int NUM = 5;

struct bop
{
	char fullname[StrSize];
	char title[StrSize];
	char bopname[StrSize];
	int preference;
};

int main(void)
{
	bop members[NUM] =
	{
		{"Wimp Macho", "Unknown", "Unknown", 0},
		{"Raki Rhodes", "Junior Programmer", "Unknown", 1},
		{"Celia Laiter", "Unknown", "MIPS", 2},
		{"Hoppy Hipman", "Analyst Trainee", "Unknown", 1},
		{"Pat Hand", "Unknown", "LOOPY", 2}
	};
	char choice;

	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name       b. display by title" << endl;
	cout << "c. display by bopname    d. display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice: ";

	cin >> choice;
	while(choice != 'q')
	{
		switch(choice)
		{
			case 'a': for(int i = 0; i < NUM; i++)
				 	cout << members[i].fullname << endl;
				  break;
			case 'b': for(int i = 0; i < NUM; i++)
					cout << members[i].title << endl;
				  break;
			case 'c': for(int i = 0; i < NUM; i++)
					cout << members[i].bopname;
				  break;
			case 'd': for(int i = 0; i < NUM; i++)
				  {
				  	if(members[i].preference == 0)
						cout << members[i].fullname << endl;
					else if(members[i].preference == 1)
						cout << members[i].title << endl;
					else
						cout << members[i].bopname << endl;
				  }
				  break;
		}
		cout << "Next choice: ";
		cin >> choice;
	}

	cout << "Bye!"

	return 0;
}

