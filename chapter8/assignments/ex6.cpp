#include <iostream>
#include <climits>
#include <string>

using namespace std;

template <typename T>
T maxn(T arr[], int n);
template <> string maxn<string>(string strs[], int n);

int main(void)
{
	int nums1[6] = {1, 2, 3, 4, 5, 6};
	double nums2[4] = {1.1, 2.3, 3.4, 4.5};
	string words[5] = {"kjab", "acga", "bcbcbc", "ak", "zxusab"};

	cout << maxn(nums1, 6) << endl;
	cout << maxn(nums2, 4) << endl;
	cout << maxn(words, 5) << endl;

	return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
	T max = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}

	return max;
}

template <> string maxn<string>(string strs[], int n)
{
	int pos;
//	cout << strs[0] << endl;
	for(int i = 1; i < n; i++)
	{
		cout << strs[i].size() << endl;
		if(strs[i].size() > strs[pos].size())
			pos = i;
	}

	return strs[pos];
}
