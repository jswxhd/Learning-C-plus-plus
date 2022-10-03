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
	PizzaCom pc;

	cout << "Enter the company name: ";
	cin >> pc.name;

	cout << "Enter the diameter of pizza: ";
	cin >> pc.diameter;

	cout << "Enter the weight of pizza: ";
	cin >> pc.weight;

	cout << "name = " << pc.name << ", diameter = " << pc.diameter << ", weight = " << pc.weight << endl;

	return 0;
}
