#include <iostream>

const int ArSize = 10;

int main(void)
{
	using namespace std;

	int donations[ArSize];
	int value;
	int i = 0;
	double total;

	cout << "Enter the value here: " << endl;

	while(i < ArSize && (cin >> value))
	{
		donations[i] = value;
		total += value;
		i++;
		cout << "Enter the next donation value here: " << endl;
	}

	int cnt = 0;
	double avg;

	if(i == 0)
		cout << "There is no donation." << endl;
	else
	{
		avg = total / i;
		cout << "avg = " << avg << endl;
		for(int j = 0; j < i; j++)
		{
			if(donations[j] > avg)
				cnt++;
		}

		cout << "The average donation value is " << avg << endl;
		cout << "There are " << cnt << " donations having value larger than average." << endl;
	}

	return 0;
}
