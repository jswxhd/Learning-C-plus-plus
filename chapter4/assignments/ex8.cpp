#include <iostream>
#include <string>

using namespace std;

struct PizzaCom
{
	string name;
	float diameter;
	float weight;
};

int main(void)
{
	PizzaCom *pt = new PizzaCom;

	cout << "Enter the diameter of pizza: ";
	cin >> pt->diameter;
	cin.get();

	cout << "Enter the company name: ";
	getline(cin, pt->name);

	cout << "Enter the weight of pizza: ";
	cin >> pt->weight;

	cout << "name = " << (*pt).name << ", diameter = " << (*pt).diameter << ", weight = " << (*pt).weight << endl;

	delete pt;

	return 0;
}
