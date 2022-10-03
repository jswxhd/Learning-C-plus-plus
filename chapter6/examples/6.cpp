#include <iostream>

using namespace std;

const char *qualify[] =
{
	"Perfect",
	"Great",
	"Good",
	"Just so so",
	"Failed"
};

int main(void)
{
	int score;

	cout << "Enter your score: ";
	cin >> score;

	int index;
	if(score >= 90 && score <= 100)
		index = 0;
	else if(score >= 80 && score < 90)
		index = 1;
	else if(score >= 70 && score < 80)
		index = 2;
	else if(score >= 60 && score < 70)
		index = 3;
	else
		index = 4;

	cout << "You qualify: " << qualify[index] << endl;

	return 0;
}
