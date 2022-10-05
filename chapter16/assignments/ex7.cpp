#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> Lotto(const int options, const int choices);
void Show(const int & choice);

int main(void)
{
	vector<int> winners;
	winners = Lotto(51, 6);
	cout << "The numbers you choose are ";
	for_each(winners.begin(), winners.end(), Show);
	cout << endl;

	return 0;
}

vector<int> Lotto(const int options, const int choices)
{
	vector<int> vec;
	for(int i = 1; i <= options; i++)
		vec.push_back(i);
	unordered_set<int> seen;
	while(seen.size() < choices)
	{
		random_shuffle(vec.begin(), vec.end());
		if(!seen.count(vec[0]))
			seen.insert(vec[0]);
	}
	vector<int> res(choices);
	copy(seen.begin(), seen.end(), res.begin());
	return res;
}

void Show(const int & choice)
{
	cout << choice << " ";
}
