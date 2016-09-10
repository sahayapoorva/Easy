#include <iostream>

using namespace std;

class Solution {
public:
	bool isPowerOfThree(int n) {
		int retVal = true;
		while (n >= 3)
		{
			if (n % 3 != 0)
			{
				retVal = false;
				break;
			}

			n = n / 3;
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
	cout<<s.isPowerOfThree(1)<<endl;
	cout << s.isPowerOfThree(9)<<endl;
	cout << s.isPowerOfThree(81) << endl;
	cout << s.isPowerOfThree(27) << endl;
	return 0;
}