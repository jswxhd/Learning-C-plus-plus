#include <iostream>
#include <cctype>
#include "stack.h"

using namespace std;

int main(void)
{
	char ch;
	unsigned long po;
	Stack st;

	cout << "Please enter A to push to stack, \n"
	     << "P to pop from stack, Q to quit. \n";

	while(cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n')
			continue;

		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter a number you want to push to stack:\n";
				cin >> po;
				if(st.isfull())
					cout << "Stack already full" << endl;
				else
					st.push(po);
				break;
			case 'P':
			case 'p':
				if(st.isempty())
					cout << "Stack is empty" << endl;
				else
				{
					st.pop(po);
					cout << po << " is poped" << endl;
				}
				break;
		}
		cout << "Please enter A to push to stack, \n"
	     	     << "P to pop from stack, Q to quit. \n";
	}

	return 0;
}
