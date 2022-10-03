#include <iostream>

const int Month = 12, Years = 3;

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

	int nums[Years][Month];
	int sum = 0;

	for(int j = 0; j < Years; j++)
	{
		int ysum = 0;
		for(int i = 0; i < Month; i++)
		{
			cout << "Enter the number of book sold in " << months[i] << " in year " << j + 1 << " : ";
			int num;
			cin >> num;
			nums[j][i] = num;
			ysum += num;
		}
		cout << "There are " << ysum << " books sold in year " << j + 1 << "." << endl;
		sum += ysum;
	}

	cout << "There are " << sum << " books sold in three years." << endl;

	return 0;
}
