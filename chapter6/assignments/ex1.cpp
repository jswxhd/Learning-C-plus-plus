#include <iostream>
#include <cctype>

int main(void)
{
	using namespace std;

	char ch;

	cout << "Enter something here: " << endl;

	while(cin.get(ch) && ch != '@')
	{
		if(isdigit(ch))
			continue;
		else if(islower(ch))
			ch = toupper(ch);
		else if(isupper(ch))
			ch = tolower(ch);
		cout << ch;
	}

	cout << endl;

	return 0;
}
