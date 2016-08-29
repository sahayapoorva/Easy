#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	string reverseString(string s) {
		string retVal = "";
		for (int i = 0; i < s.size(); i++) {
			retVal.push_back(s.at(s.size() - i - 1));
		}
		return retVal;
	}
};

int main()
{
	Solution s1;
	cout<<s1.reverseString("hello");
	return 0;
}