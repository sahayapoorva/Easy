#include <iostream>

using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		char lastChar = '\0';
		int retVal = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s.at(i) == 'I')
			{
				retVal = retVal + 1;
				lastChar = 'I';
			}
			else if(s.at(i) == 'V')
			{
				retVal = retVal + 5;

				if (lastChar == 'I')
				{
					retVal = retVal - 2;
				}

				lastChar = 'V';
			}
			else if (s.at(i) == 'X')
			{
				retVal = retVal + 10;
				if (lastChar == 'I')
				{
					retVal = retVal - 2;
				}

				lastChar = 'X';
			}
			else if (s.at(i) == 'L')
			{
				retVal += 50;
				if (lastChar == 'X')
				{
					retVal = retVal - 20;
				}

				lastChar = 'L';
			}
			else if(s.at(i) == 'C')
			{
				retVal = retVal + 100;
				if (lastChar == 'X')
				{
					retVal = retVal - 20;
				}

				lastChar = 'C';
			}
			else if (s.at(i) == 'D')
			{
				retVal = retVal + 500;
				if (lastChar == 'C')
				{
					retVal = retVal - 200;
				}

				lastChar = 'D';
			}
			else if (s.at(i) == 'M')
			{
				retVal = retVal + 1000;
				if (lastChar == 'C')
				{
					retVal = retVal - 200;
				}
			}
		}

		return retVal;
	}
};

int main()
{
	string input = "MCDLXXVI";
	Solution s;
	cout<<s.romanToInt(input);
	return 0;
}