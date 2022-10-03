#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void convert(string &s);

int main(void)
{
	string str;

	cout << "Enter a string (q to quit): ";
	getline(cin, str);

	while(str != "q")
	{
		convert(str);
		cout << str << endl;
		cout << "Next string (q to quit): ";
		getline(cin, str);
	}

	cout << "Bye." << endl;

	return 0;
}

void convert(string &s)
{
	int n = s.length();
	for(int i = 0; i < n; i++)
	{
		if(isalpha(s[i]))
			s[i] = toupper(s[i]);
	}
}
