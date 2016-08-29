/**
*	Implementing the Moore's voting Algorithm
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findCandidate(vector<int>& nums) {
		int maj_index = 0;
		int count = 1;

		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[maj_index] == nums[i])
			{
				count++;
			}
			else
			{
				count--;
			}

			if (count == 0)
			{
				maj_index = i;
				count = 1;
			}
		}

		return maj_index;
	}

	int majorityElement(vector<int>& nums)
	{
		int majElement = nums[findCandidate(nums)];

		int count = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == majElement)
			{
				count++;
			}
		}

		if (count >= (int)(nums.size() / 2))
		{
			return majElement;
		}

		return -1;
	}
};

int main()
{
	vector<int> input = {1,1,3,3,3,2,4,3,3,3,4,3};
	Solution s;
	cout << s.majorityElement(input);
	return 0;
}