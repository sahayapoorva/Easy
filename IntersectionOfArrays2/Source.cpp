#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int> retVal;
		map<int,int> scannedElements;

		for (int i = 0; i < nums1.size(); i++)
		{
			if (scannedElements.find(nums1[i]) == scannedElements.end())
			{
				scannedElements.insert(make_pair(nums1[i],1));
			}
			else
			{
				scannedElements[nums1[i]] = scannedElements[nums1[i]] + 1;
			}
		}

		for (int i = 0; i < nums2.size(); i++)
		{
			if (scannedElements.find(nums2[i]) != scannedElements.end())
			{
				scannedElements[nums2[i]] = scannedElements[nums2[i]] - 1;

				if (scannedElements[nums2[i]] >= 0)
				{
					retVal.push_back(nums2[i]);
				}
			}
		}

		return retVal;
	}
};

int main()
{
	vector<int> nums1 = { 1, 2, 2, 1 }, nums2 = {2,2};
	Solution s;
	vector<int> result = s.intersect(nums1, nums2);
	return 0;
}