//https://www.codechef.com/problems/TRICOIN

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


int maxHeight(int n)
{
	int ans = 0;
	int s=0, e = n;

	while(s <= e)
	{
		int mid = (s+e)/2;

		int req = mid*(mid+1)/2;

		if(req <= n)
		{
			ans = mid;
			s = mid+1;
		}
		else
		{
			e = mid-1;
		}
	}
	return ans;
}

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		cout << maxHeight(n) << endl;
	}
	return 0;
}
	