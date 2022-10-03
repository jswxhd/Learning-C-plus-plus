#include <iostream>

using namespace std;

const int ArSize = 80;

char *left(const char *str, int n = 1);
unsigned long left(unsigned long num, unsigned int ct);

int main(void)
{
	const char *trip = "Hawaii";
	unsigned long n = 12345678;
	int i;
	char *temp;

	for(i = 0; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete []temp;
	}

	return 0;
}

char *left(const char *str, int n)
{
	int m = 0;
	while(m < n && str[m] != '\0')
		m++;

	char *p = new char[m + 1];
	int i;

	for(i = 0; i < m; i++)
		p[i] = str[i];

	p[i] = '\0';

	return p;
}

unsigned long left(unsigned long num, unsigned int ct)
{
	unsigned long n = num;
	unsigned int digits = 1;

	if(num == 0 || ct == 0)
		return 0;

	while(n /= 10)
		digits++;
	if(digits > ct)
	{
		ct = digits - ct;
		while(ct--)
			num /= 10;
		return num;
	}
	else
		return num;
}
