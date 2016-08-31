#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		bool retVal = false;
		set<int> count;

		for (int i = 0; i < nums.size(); i++)
		{
			if (count.find(nums[i]) != count.end())
			{
				return true;
			}

			count.insert(nums[i]);
		}

		return retVal;
	}
};

int main()
{
	vector<int> input = {1,2,3,4,5,6,7,1};
	Solution s;
	cout << s.containsDuplicate(input);
	return 0;
}