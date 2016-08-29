#include <iostream>

using namespace std;

class Solution {
public:
	int addDigits(int num)
	{
		cout << "Hello:";
		while (true)
		{
			num = add(num);
			if (!(num / 10))
			{
				break;
			}
		}

		return num;
	}

	int add(int a)
	{
		int retVal = 0;
		while (a)
		{
			retVal = retVal + (a % 10);
			a = a / 10;
		}

		return retVal;
	}
};

int main() {
	Solution s1;
	cout<<s1.addDigits(1);
	return 0;
}