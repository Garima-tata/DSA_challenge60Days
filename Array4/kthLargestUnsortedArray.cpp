#include <bits/stdc++.h>
using namespace std;
int kthLargest(vector<int>& arr, int size, int k)
{
	sort(arr.begin(), arr.end());

	return arr[size-k];

}