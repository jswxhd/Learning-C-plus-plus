#include <iostream>
#include <climits>

using namespace std;

const int ArSize = 5;

template <typename T>
T max5(T arr[]);

int main(void)
{
	int nums1[ArSize] = {1, 2, 3, 4, 5};
	double nums2[ArSize] = {1.1, 2.3, 3.4, 4.5, 5.6};

	cout << max5(nums1) << endl;
	cout << max5(nums2) << endl;

	return 0;
}

template <typename T>
T max5(T arr[])
{
	T max = INT_MIN;
	for(int i = 0; i < ArSize; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}

	return max;
}
