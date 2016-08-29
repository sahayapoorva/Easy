#include <iostream>

using namespace std;

class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		for (int i = 0; i < ransomNote.size(); i++)
		{
			size_t pos = magazine.find(ransomNote.at(i));
			if(pos != string::npos)
				magazine.erase(pos, 1);
			else
			{
				return false;
			}
		}

		return true;
	}
};

int main()
{
	Solution s;
	cout << s.canConstruct("a", "b");
	cout << s.canConstruct("aa", "ab");
	cout << s.canConstruct("aa", "aab");
	return 0;
}