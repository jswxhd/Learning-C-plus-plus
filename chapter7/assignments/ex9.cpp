#include <iostream>
#include <cstring>

using namespace std;

const int SLEN = 30;

struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main(void)
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while(cin.get() != '\n')
		continue;

	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for(int i = 0; i < entered; i++)
	{
		cout << "Display student #" << i + 1 << " information..." << endl;
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);

	delete [] ptr_stu;
	cout << "Done!" << endl;

	return 0;
}

int getinfo(student pa[], int n)
{
	char name[SLEN];
	char hobby[SLEN];
	int ooplevel;
	int i;

	for(i = 0; i < n; i++)
	{
		cout << "Enter student #" << i + 1 << " information..." << endl;
		cout << "Fullname: ";
		cin.get(name, SLEN).get();
		if(!(strcmp(name, "")))
			break;
		strcpy(pa[i].fullname, name);

		cout << "Hobby: ";
		cin.get(hobby, SLEN).get();
		strcpy(pa[i].hobby, hobby);

		cout << "OOPLevel: ";
		(cin >> ooplevel).get();
		pa[i].ooplevel = ooplevel;
	}

	return i;
}

void display1(student st)
{
	cout << "Full name: " << st.fullname << endl;
	cout << "Hobby:     " << st.hobby << endl;
	cout << "OOPLevel:  " << st.ooplevel << endl;
}

void display2(const student *ps)
{
	cout << "Full name: " << ps->fullname << endl;
	cout << "Hobby:     " << ps->hobby << endl;
	cout << "OOPLevel:  " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "Full name: " << pa[i].fullname << endl;
		cout << "Hobby:     " << pa[i].hobby << endl;
		cout << "OOPLevel:  " << pa[i].ooplevel << endl;
	}
}
