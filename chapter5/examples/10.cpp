#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	cout << "Please enter a word: ";
	string word;
	cin >> word;

	int i, j;
	char temp;
	for(j = 0, i = word.size() - 1; j < i; j++, i--)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}

	cout << word << endl;

	return 0;
}
