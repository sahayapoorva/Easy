#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}

	int min = 0;
	while (arr.size())
	{
		cout << arr.size() << endl;
		min = *(min_element(begin(arr),end(arr)));
		arr.erase(remove(arr.begin(),arr.end(),min),arr.end());
	}

	return 0;
}
