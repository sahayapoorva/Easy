#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int titleToNumber(string s) {
		int retVal = 0;
		for (int i = 0; i < s.size(); i++)
		{
			retVal += pow(26, i) * (s.at(s.size() - i -1) - 64);
		}

		return retVal;
	}
};

int main()
{
	Solution s1;
	cout << s1.titleToNumber("A");
	cout << s1.titleToNumber("AA");
	cout << s1.titleToNumber("AC");
	return 0;
}