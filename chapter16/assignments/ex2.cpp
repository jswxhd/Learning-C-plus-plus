#include <iostream>
#include <string>
#include <cstdlib>
#include <iterator>
#include <cctype>

using namespace std;

bool isPalindrome(string s);

int main(void)
{
	string str;

	cout << "Enter a line of text: ";
	getline(cin, str);
	bool ans = isPalindrome(str);
	if(ans)
		cout << str << " is a palindrome." << endl;
	else
		cout << str << " is not a palindrome." << endl;

	return 0;
}

bool isPalindrome(string s)
{
	int n = s.size();
	int i = 0, j = n - 1;
	while(i < j)
	{
		if(!isalpha(s[i]))
		{
			i++;
			continue;
		}
		if(!isalpha(s[j]))
		{
			j--;
			continue;
		}
		char c1 = islower(s[i]) ? s[i] : tolower(s[i]);
		char c2 = islower(s[j]) ? s[j] : tolower(s[j]);
		if(c1 != c2)
			return false;
		i++;
		j--;
	}
	return true;
}
