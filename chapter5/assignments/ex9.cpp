#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	cout << "Enter words (to stop, type the word done): " << endl;
	string words;
	cin >> words;

	int cnt = 0;
	while(words != "done")
	{
		cnt++;
		cin >> words;
	}

	cout << "You entered a total of " << cnt << " words." << endl;

	return 0;
}
