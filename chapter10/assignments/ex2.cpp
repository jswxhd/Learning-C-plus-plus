#include "person.h"

int main(void)
{
	Person one;
	one.Show();
	one.FormalShow();

	Person two("Smythecraft");
	two.Show();
	two.FormalShow();

	Person three("Dimwiddy", "Sam");
	three.Show();
	three.FormalShow();

	return 0;
}
