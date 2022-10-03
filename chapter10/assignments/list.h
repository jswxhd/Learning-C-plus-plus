#ifndef LIST_H_
#define LIST_H_

#include <iostream>

typedef unsigned long Item;

using namespace std;

void visit_item(Item &item);

class List
{
	private:
		enum {MAX = 10};
		Item items[MAX];
		int top;
	public:
		List();
		bool isempty() const;
		bool isfull() const;
		bool add(const Item &item);
		void visit(void (*pf)(Item &));
};

#endif
