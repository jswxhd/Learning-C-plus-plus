#include <iostream>
#include <cstring>

const int ArSize = 100;
const char DONE[] = "done";

int main(void)
{
	using namespace std;

	cout << "Enter words (to stop, type the word done): " << endl;
	char words[ArSize];
	cin >> words;

	int cnt = 0;
	while(strcmp(words, DONE))
	{
		cnt++;
		cin >> words;
	}

	cout << "You entered a total of " << cnt << " words." << endl;

	return 0;
}
