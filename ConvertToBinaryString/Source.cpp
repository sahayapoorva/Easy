#include <iostream>
#include <string>

using namespace std;

int main()
{
	uint32_t a, mask = 1;
	cin >> a;
	string ret = "";
	int count = 0;
	while (count < 32)
	{
		if (mask == (a & mask))
		{
			ret = "1" + ret;
		}
		else
		{
			ret = "0" + ret;
		}

		mask = (mask << 1);
		count++;
	}

	cout << ret;
	return 0;
}