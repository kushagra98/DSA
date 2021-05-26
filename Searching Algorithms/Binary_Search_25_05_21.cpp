#include<bits/stdc++.h>
using namespace std;

#define int long long


int findMiniumElement(vector<int> &arr)
{
	int n = arr.size();
	int ans = -1;
	int s = 0, e = arr.size() - 1;

	while(s <= e)
	{
		int mid = (s+e)/2;

		if(arr[mid] > arr[n-1])    // 1st one
			s = mid+1;
		else
		{
			ans = mid;
			e = mid-1;
		}
	}

	return arr[ans];
}



signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	vector<int> v = {};

	cout << findMiniumElement(v);

	return 0;
}
	