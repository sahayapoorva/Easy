#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int climbStairs(int n)
	{
		vector<int> arr;
		return climbStairs(arr,n);
	}
	int climbStairs(vector<int>& arr, int n) {
		if (n == 0)
		{
			if (arr.size() != 1)
			{
				arr.push_back(1);
			}
			
			return arr[0];
		}

		if (n == 1)
		{
			if (arr.size() == 0)
			{
				climbStairs(arr, 0);
			}
			if (arr.size() < 2)
			{
				arr.push_back(1);
			}

			return arr[1];
		}

		if (n > arr.size())
		{
			arr.push_back(climbStairs(arr, n-2)+climbStairs(arr,n-1));
		}
		else if (n == arr.size())
		{
			arr.push_back(arr[n - 1] + arr[n - 2]);
		}

		return arr[n];
	}
};

int main()
{
	Solution s;
	cout<<s.climbStairs(2);
	return 0;
}