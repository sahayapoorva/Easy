#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int> retVal;

		if (nums1.size() > nums2.size())
		{
			for (int i = 0; i < nums2.size(); i++)
			{
				for (int j = 0; j < nums1.size(); j++)
				{
					if (nums2[i] == nums1[j])
					{
						bool bExist = false;
						for (int k = 0; k < retVal.size(); k++)
						{
							if (nums2[i] == retVal[k])
							{
								bExist = true;
								break;
							}
						}

						if (!bExist)
						{
							retVal.push_back(nums2[i]);
						}

						if (nums2.size() == retVal.size())
						{
							return retVal;
						}


						break;
					}
				}
			}
		}
		else
		{
			for (int i = 0; i < nums1.size(); i++)
			{
				for (int j = 0; j < nums2.size(); j++)
				{
					if (nums1[i] == nums2[j])
					{
						bool bExist = false;
						for (int k = 0; k < retVal.size(); k++)
						{
							if (nums1[i] == retVal[k])
							{
								bExist = true;
								break;
							}
						}

						if (!bExist)
						{
							retVal.push_back(nums1[i]);
						}

						if (nums1.size() == retVal.size())
						{
							return retVal;
						}

						break;
					}
				}
			}
		}
		
		return retVal;
	}
};

int main()
{
	Solution s;
	vector<int> input1 = { 1, 2, 2, 1 }, input2 = {2,2}, output;

	output = s.intersection(input1, input2);
	return 0;
}
