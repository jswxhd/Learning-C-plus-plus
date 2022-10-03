#include <iostream>
#include <string>
#include <memory>

int main(void)
{
	using namespace std;
	auto_ptr<string> films[5] =
	{
		auto_ptr<string> (new string("FB")),
		auto_ptr<string> (new string("DW")),
		auto_ptr<string> (new string("CR")),
		auto_ptr<string> (new string("TE")),
		auto_ptr<string> (new string("GE")),
	};

	auto_ptr<string> pwin;
	pwin = films[2];

	cout << "The nominees for best avian baseball film are\n";
	for(int i = 0; i < 5; i++)
		cout << *films[i] << endl;
	cout << "The winner is " << *pwin << endl;

	return 0;
}
