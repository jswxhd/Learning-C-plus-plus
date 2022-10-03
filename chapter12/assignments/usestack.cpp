#include <iostream>
#include <cctype>
#include "stack.h"

using namespace std;

void interact_with_stack(Stack &st);

int main(void)
{
	int n;

	cout << "Enter the number of elements you want to save in stack: ";
	cin >> n;
	Stack st(n);
	interact_with_stack(st);

	cout << "*********Test copy constructor**********\n";
	Stack st2 = st;
	interact_with_stack(st2);

	cout << "**********Test opertor =************\n";
	Stack st3;
	st3 = st;
	interact_with_stack(st3);

	return 0;
}

void interact_with_stack(Stack &st)
{
	char ch;
        Item po;

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
                                cout << "Enter a number you want to "
					"push to stack:\n";
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
}

