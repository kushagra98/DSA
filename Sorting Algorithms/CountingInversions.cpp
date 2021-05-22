#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define endl '\n'
#define pii pair<int, int>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()

int merge(vector<int> &arr, int s, int mid, int e)
{

	vector<int> A(e-s+1);
	int p = s;  // starting pos of 1st array 
	int q = mid+1; // starting
	int k = 0;
	int cnt = 0; // new inversions
	
	for(int i=s; i<=e; i++)
	{
		if(p > mid)
		{	
			A[k++] = arr[q++];
		}
		else if(q > e)
		{
			A[k++] = arr[p++];
		}
		else if(arr[p] < arr[q])
			A[k++] = arr[p++];
		else
		{	
			cnt += mid - p + 1;
			A[k++] = arr[q++];
		}
	}
	
	for(int i=0; i<A.size(); i++)
		arr[s++] = A[i];
	
	return cnt;
}

int merge_sort(vector<int> &arr, int s, int e)
{
	if(s >= e)
		return 0;
	int mid = (s+e) / 2;
	int c1 = merge_sort(arr,s,mid);
	int c2 = merge_sort(arr,mid+1,e);
	int rem = merge(arr,s,mid,e);
	return c1 + c2 + rem;
}



signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> v = {4,2,1,5,6,0};
	int ans = merge_sort(v,0,v.size()-1);
	cout << "Total number of Inversions : " << ans;
	
	return 0;
}



