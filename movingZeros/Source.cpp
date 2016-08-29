#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
			{
				int j = i + 1;
				int temp;
				bool bNonZeroFound = false;
				for (; j < nums.size(); j++)
				{
					if (nums[j] != 0)
					{
						bNonZeroFound = true;
						temp = nums[j];
						nums[j] = nums[i];
						nums[i] = temp;
						break;
					}
				}

				if (!bNonZeroFound)
				{
					break;
				}
			}
		}
	}
};

int main()
{
	vector<int> input = { 0, 1, 0, 3, 12};
	Solution s;
	s.moveZeroes(input);
	return 0;
}