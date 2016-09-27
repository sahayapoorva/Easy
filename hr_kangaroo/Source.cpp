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
	int x1;
	int v1;
	int x2;
	int v2;
	cin >> x1 >> v1 >> x2 >> v2;

	if (v1 == v2)
	{
		if (x1 != x2)
		{
			cout<<"NO";
			return;
		}
		else
		{
			cout << "YES";
			return;
		}
	}

	int num = -(x1 - x2);
	int denom = (v1 - v2);
	bool ismultiple = false;
	if (num%denom == 0)
	{
		ismultiple = true;
	}
	if (num/denom > 0 && ismultiple)
		cout << "YES" << endl;
	else
		cout << "NO";
	return 0;
}
