#include <iostream>

using namespace std;

const int Max = 5;

double * fill_array(double *begin, double *end);
void show_array(double arr[], double *end);
void revalue(double r, double arr[], double *end);

int main(void)
{
	double properties[Max];

	double *pa = fill_array(properties, properties + Max);
	show_array(properties, pa);

	if(pa != properties)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while(!(cin >> factor))
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bad input, input process terminated." << endl;
		}
		revalue(factor, properties, pa);
		show_array(properties, pa);
	}

	return 0;
}

double * fill_array(double *begin, double *end)
{
	double *pt;
	double temp;
	int i;

	for(pt = begin, i = 0; pt != end; pt++, i++)
	{
		cout << "Enter value #" << i + 1 << ": " ;
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bad input, input process terminated." << endl;
			break;
		}
		else if(temp < 0)
			break;
		else
			*pt = temp;
	}

	return pt;
}

void show_array(double arr[], double *end)
{
	double *pt;
	int i;

	for(pt = arr, i = 0; pt != end; pt++, i++)
	{
		cout << "Property #" << i + 1 << ": $";
		cout << *pt << endl;
	}
}

void revalue(double r, double arr[], double *end)
{
	for(double *pt = arr; pt != end; pt++)
		*pt *= r;
}
