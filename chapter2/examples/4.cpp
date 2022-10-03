#include <iostream> 

int main(void) 
{
	using namespace std;

	int carrots;
	
	// cout is an ostream class object	
	cout << "How many carrots do you have?" << endl;
	// cin is an istream class object
	cin >> carrots; 
	cout << "Here are two more.";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots.";
	cout << endl;
	
	return 0;
}
