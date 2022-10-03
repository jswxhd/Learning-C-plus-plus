#include <iostream>

using namespace std;

struct job
{
	char name[40];
	double salary;
	int floor;
};

template <typename T>
void Swap(T &a, T &b);

template <> void Swap<job>(job &j1, job &j2);

void show(job &j);

int main(void)
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	Swap(i, j);
	cout << "After swap, now i, j = " << i << ", " << j << endl;

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << endl;
	Swap(x, y);
	cout << "After swap, now x, y = " << x << ", " << y << endl;

	job Rick = {"Rick", 2000, 10};
	job Jack = {"Jack", 1100, 11};

	show(Rick);
	show(Jack);
	Swap(Rick, Jack);
	cout << "After swap:" << endl;
	show(Rick);
	show(Jack);

	return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap<job>(job &j1, job &j2)
{
	double t1;
	int t2;

	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}


void show(job &j)
{
	cout << j.name << ": " << j.salary << " on floor " << j.floor << endl;
}
