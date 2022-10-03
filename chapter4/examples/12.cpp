#include <iostream>

using namespace std;

struct inflatable
{
//	std::string name;
//	string name;
	char name[20];
	float volume;
	double price;
};


int main(void)
{
//	using namespace std;

	inflatable bonquet =
	{
		"sun flower",
		0.2,
		12.49
	};

	inflatable choice;

	cout << "bonquet: " << bonquet.name << " for $" << bonquet.price << endl;

	choice = bonquet;
	cout << "choice: " << choice.name << " for $" << choice.price << endl;


	return 0;
}
