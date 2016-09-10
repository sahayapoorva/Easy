#include <iostream>

using namespace std;

class Solution {
public:
	bool isPowerOfTwo(int n) {
		bool retVal = true;

		while (n >= 2)
		{
			if (n % 2 != 0)
			{
				retVal = false;
				break;
			}

			n = n / 2;
		}

		if (retVal && n != 1)
		{
			retVal = false;
		}

		return retVal;
	}
};

int main()
{
	Solution s;
	cout<<s.isPowerOfTwo(2)<<endl;
	cout<<s.isPowerOfTwo(1)<<endl;
	cout<<s.isPowerOfTwo(100)<<endl;
	return 0;
}