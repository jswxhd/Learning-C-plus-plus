#include <iostream>
#include "sales.h"

namespace SALES
{
	using std::cout;
	using std::cin;
	using std::endl;

	Sales::Sales()
	{
	}

	Sales::Sales(const double ar[], int n)
	{
		int size = n < QUARTERS ? n : QUARTERS;
		double sum = 0;
		min = max = ar[0];
		int i;

		sales[0] = ar[0];
		for(i = 1; i < size; i++)
		{
			sum += ar[i];
			sales[i] = ar[i];
			if(ar[i] < min)
				min = ar[i];
			else if(ar[i] > max)
				max = ar[i];
		}
		average = sum / size;

		for(int j = i; j < QUARTERS; j++)
			sales[j] = 0.0;
	};

	void Sales::setSales(void)
	{
		int i = 0;

		cout << "Enter the sale value: ";
		while(i < QUARTERS && cin >> this->sales[i])
		{
			i++;
			cout << "Enter next sale value: ";
		}
		this->max = this->min = this->sales[0];
		double sum = this->sales[0];
		for(int i = 1; i < QUARTERS; i++)
		{
			sum += this->sales[i];
			if(this->sales[i] < this->min)
				this->min = this->sales[i];
			else if(this->sales[i] > this->max)
				this->max = this->sales[i];
		}
		average = sum / QUARTERS;
	}

	void Sales::showSales() const
	{
		cout << "Sales in four quaters: ";
		for(int i = 0; i < QUARTERS; i++)
			cout << sales[i] << " ";
		cout << endl;
		cout << "AVG = " << average << ", MAX = " << max << ", MIN = " << min << endl;
	}
}
