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
	int n;
	int k;
	cin >> n >> k;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}

	vector<vector<int>> temp;
	for (int i = 0; i < n; i++)
	{
		vector<int> temp1;
		for (int j = 0; j < n; j++)
		{
			temp1.push_back(a[i] + a[j]);
		}

		temp.push_back(temp1);
	}

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (temp[i][j] % k == 0)
			{
				count++;
			}
		}
	}

	cout << count;
	return 0;
}
