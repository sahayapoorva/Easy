#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	int a0;
	int a1;
	int a2;
	cin >> a0 >> a1 >> a2;
	int b0;
	int b1;
	int b2;
	cin >> b0 >> b1 >> b2;
	int count1 = 0;
	int count2 = 0;
	if (a0>b0)
	{
		count1++;
	}
	else if(b0>a0)
	{
		count2++;
	}

	if (a1>b1)
	{
		count1++;
	}
	else if(b1>a1)
	{
		count2++;
	}
	if (a2>b2)
	{
		count1++;
	}
	else if (b2>a2)
	{
		count2++;
	}

	cout << count1 << " " << count2;
	return 0;
}
