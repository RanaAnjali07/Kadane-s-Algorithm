#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int s[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + s[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

int main()
{
	int s[] = {-1, -4, 3, -2, -1, 5, 7};
	int n = sizeof(s)/sizeof(s[0]);
	int max_sum = maxSubArraySum(s, n);
	cout << "Maximum contiguous sum will be " << max_sum;
	return 0;
}
