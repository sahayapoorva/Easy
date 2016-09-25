#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n, k, q;
	cin >> n >> k >> q;
	vector<int> arr;

	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}

	k = k % n;


	vector<int> temp_arr(k);
	std::copy(arr.begin() + arr.size() - k - 1, arr.end(), temp_arr.begin());
	std::copy(arr.begin(), arr.begin()+arr.size()-k, arr.begin()+k-1);
	//for (int i = arr.size() - k; i < arr.size(); i++)
	//{
	//	temp_arr.push_back(arr[i]);
	//}

	//for (int i = 0; i < arr.size()-k; i++)
	//{
	//	arr[k - i] = arr[i];
	//}

	//for (int i = 0; i < k; i++)
	//{
	//	arr[i] = temp_arr[i];
	//}


	for (int i = 0; i < q; i++)
	{
		cin >> temp;
		cout << arr[temp] <<endl;
	}

	return 0;
}
