#include <iostream>

const int Month = 12;

int main(void)
{
	using namespace std;

	const char * months[Month] =
	{
		"Jan",
		"Feb",
		"Mar",
		"Apr",
		"May",
		"Jun",
		"Jul",
		"Aug",
		"Sep",
		"Oct",
		"Nov",
		"Dec"
	};

	int nums[Month];
	int sum = 0;

	for(int i = 0; i < Month; i++)
	{
		cout << "Enter the number of book sold in " << months[i] << ": ";
		int num;
		cin >> num;
		nums[i] = num;
		sum += num;
	}

	cout << "There are " << sum << " books sold in this year." << endl;

	return 0;
}
