#include <iostream>
#include <cstring>
#include <cctype>

const int ArSize = 20;

int main(void)
{
	using namespace std;

	char word[ArSize];
	int cnt_a = 0, cnt_v = 0, cnt_o = 0;

	cout << "Enter words (q to quit):" << endl;

	cin >> word;
	while(strcmp(word, "q"))
	{
		char initial = word[0];
		if(!isalpha(initial))
			cnt_o++;
		else
		{
			switch(initial)
			{
				case 'a': cnt_v++; break;
				case 'e': cnt_v++; break;
				case 'i': cnt_v++; break;
				case 'o': cnt_v++; break;
				case 'u': cnt_v++; break;
				default: cnt_a++;
			}
		}
		cin >> word;
	}

	cout << cnt_v << " words beginning with vowels." << endl;
	cout << cnt_a << " words beginning with consonants." << endl;
	cout << cnt_o << " others" << endl;

	return 0;
}
