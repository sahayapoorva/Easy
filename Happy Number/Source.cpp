#include <iostream>

using namespace std;

class Solution {
public:
	bool isHappy(int n) {
		bool retVal = false;


		if (n == 1)
		{
			retVal = true;
		}
		else if (n > 1 && n < 10)
		{
			if (pow(n, 2) > 10)
			{
				retVal = isHappy(pow(n, 2));
			}
			else
			{
				retVal = false;
			}
		}
		else
		{
			int sum = 0;
			while (n > 1)
			{
				sum = 0;
				while (n > 9)
				{
					sum = sum + pow((n % 10), 2);
					n = n / 10;
				}

				n = sum + pow(n, 2);
			}

			if (n == 1)
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
	cout << s.isHappy(2);
	cout << s.isHappy(7);
	return 0;
}