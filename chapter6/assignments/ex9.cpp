#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct patron
{
	string name;
	double value;
};

int main(void)
{
	ifstream inFile;
	inFile.open("patrons.txt");

	int num;
	inFile >> num;
	inFile.get();
	cout << num << endl;

	patron * pt = new patron [num];

	string name;
	int value;
	for(int i = 0; i < num; i++)
	{
		getline(inFile, name);
		inFile >> value;
		inFile.get();

		pt[i].name = name;
		pt[i].value = value;
	}

	cout << "Here are the Grand Patrons: " << endl;
	int cnt_gp = 0;
	for(int i = 0; i < num; i++)
	{
		if(pt[i].value > 10000)
		{
			cout << pt[i].name << " " << pt[i].value << endl;
			cnt_gp++;
		}
	}
	if(cnt_gp == 0)
		cout << "none" << endl;

	cout << "Here are the Patrons:" << endl;
	int cnt_p = 0;
	for(int i = 0; i < num; i++)
	{
		if(pt[i].value <= 10000)
		{
			cout << pt[i].name << endl;
			cnt_p++;
		}
	}

	if(cnt_p == 0)
		cout << "none" << endl;

	delete [] pt;
	inFile.close();

	return 0;
}
