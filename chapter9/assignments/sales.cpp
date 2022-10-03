#include <iostream>
#include "sales.h"

namespace SALES
{
	using std::cout;
	using std::cin;
	using std::endl;

	void setSales(Sales &s, const double ar[], int n)
	{
		int size = n < QUARTERS ? n : QUARTERS;
		double sum = 0;
		s.min = s.max = ar[0];
		int i;

		s.sales[0] = ar[0];
		for(i = 1; i < size; i++)
		{
			sum += ar[i];
			s.sales[i] = ar[i];
			if(ar[i] < s.min)
				s.min = ar[i];
			else if(ar[i] > s.max)
				s.max = ar[i];
		}
		s.average = sum / size;

		for(int j = i; j < QUARTERS; j++)
			s.sales[j] = 0.0;
	};

	void setSales(Sales &s)
	{
		int i = 0;

		cout << "Enter the sale value: ";
		while(i < QUARTERS && cin >> s.sales[i])
		{
			i++;
			cout << "Enter next sale value: ";
		}
		s.max = s.min = s.sales[0];
		double sum = s.sales[0];
		for(int i = 1; i < QUARTERS; i++)
		{
			sum += s.sales[i];
			if(s.sales[i] < s.min)
				s.min = s.sales[i];
			else if(s.sales[i] > s.max)
				s.max = s.sales[i];
		}
		s.average = sum / QUARTERS;
	}

	void showSales(const Sales &s)
	{
		cout << "Sales in four quaters: ";
		for(int i = 0; i < QUARTERS; i++)
			cout << s.sales[i] << " ";
		cout << endl;
		cout << "AVG = " << s.average << ", MAX = " << s.max << ", MIN = " << s.min << endl;
	}
}
