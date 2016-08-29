#include <iostream>

using namespace std;

class Solution {
public:
	int firstUniqChar(string s) {
		for (int i = 0; i < s.size(); i++)
		{
			int pos = s.find(s.at(i), i + 1);
			if (pos == string::npos)
			{
				int pos1 = s.find(s.at(i));
				if(!(pos1 < i))
					return i;
			}
		}

		return -1;
	}
};

int main()
{
	Solution s;
	cout<<s.firstUniqChar("cc");
	cout << s.firstUniqChar("leetcode");
	return 0;
}