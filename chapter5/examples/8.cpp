//1) *++pt	2)++*pt		3)(*pt)++	4)*pt++

#include <iostream>

int main(void)
{
	using namespace std;

	double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
	double *pt = arr;

//	cout << *pt << endl;

	cout << "*++pt = " << *++pt << endl;
	cout << "++*pt = " << ++*pt << endl;
	cout << "(*pt)++ = "  << (*pt)++ << endl;
	cout << "*pt = " << *pt << endl;
	cout << "*pt++ = " << *pt++ << endl;
	cout << "*pt = " << *pt << endl;

	return 0;
}
