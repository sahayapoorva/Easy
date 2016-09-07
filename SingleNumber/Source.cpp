#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int retVal;
		map<int, int> scannedElements;
		for (int i = 0; i < nums.size(); i++)
		{
			if (scannedElements.find(nums[i]) == scannedElements.end())
			{
				scannedElements.insert(make_pair(nums[i],1));
			}
			else
			{
				scannedElements[nums[i]] = scannedElements[nums[i]] + 1;
			}
		}

		for (map<int, int>::const_iterator iter = scannedElements.begin(); iter != scannedElements.end(); ++iter)
		{
			if (iter->second == 1)
			{
				retVal = iter->first;
				break;
			}
		}

		return retVal;
	}
};

int main()
{
	vector<int> nums = { 1/*,1,2,4,5,3,2,3,4 */};
	Solution s;
	cout<<s.singleNumber(nums);
	return 0;
}