#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	char findTheDifference(string s, string t) {
		char retVal;
		size_t pos = string::npos;
		for (int i = 0; i < s.length(); i++)
		{
			pos = t.find(s.at(i));
			if (pos != string::npos)
			{
				t.erase(pos, 1);
			}
		}

		retVal = t.at(0);

		return retVal;
	}
};

int main()
{
	string s = "abcd", t = "abcde";
	Solution s1;
	cout<<s1.findTheDifference(s, t);
	return 0;
}