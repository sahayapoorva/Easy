#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	/**
	* Anagrams should have same size
	*/
	bool isAnagram(string s, string t) {
		bool retVal = false;
		if (s.size() == t.size())
		{
			for (int i = 0; i < s.size(); i++)
			{
				int pos = t.find(s.at(i));
				if (pos != string::npos)
				{
					t.erase(pos, 1);
				}
				else
				{
					break;
				}
			}

			if (t.size() == 0)
			{
				retVal = true;
			}
		}

		return retVal;
	}
};


int main()
{
	Solution s;
	cout<<s.isAnagram("anagram", "naagram");
	return 0;
}