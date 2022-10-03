#include <iostream>
#include <fstream>

int main(void)
{
	using namespace std;

	int cnt = 0;
	ifstream inFile;
	char ch;

	inFile.open("carinfo.txt");
	while(inFile.get(ch))
		cnt++;

	cout << "There are " << cnt << " characters in the file." << endl;

	return 0;
}
