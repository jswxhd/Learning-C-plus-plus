#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int reduce(long ar[], int n);

int main(void)
{
	long nums[5] = {100L, 30L, 30L, 120L, 70L};
	int uniquecnt = reduce(nums, 5);
	cout << "There are " << uniquecnt << " unique numbers in the array\n";

	return 0;
}

int reduce(long ar[], int n)
{
	sort(ar, ar + n);
	unordered_set<long> uset;
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(!uset.count(ar[i]))
		{
			uset.insert(ar[i]);
			++count;
		}
	}

	return count;
}
