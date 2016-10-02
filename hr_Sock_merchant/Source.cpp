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
	cin >> n;
	vector<int> c(n);
	unordered_map<int,int> map;
	for (int c_i = 0; c_i < n; c_i++) {
		cin >> c[c_i];
	}

	for (vector<int>::iterator iter = c.begin(); iter !=  c.end(); ++iter)
	{
		if (map.find(*iter) != map.end())
		{
			map[*iter]++;
		}
		else
		{
			map.insert(std::make_pair(*iter,1));
		}
	}

	int count = 0;
	for (unordered_map<int, int>::iterator iter = map.begin(); iter != map.end(); ++iter)
	{
		count = count + (iter->second / 2);
	}

	cout << count;

	return 0;
}
