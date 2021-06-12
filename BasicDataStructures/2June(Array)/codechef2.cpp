// Problem Link : https://www.codechef.com/problems/ZOZ/
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

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	

	int t;
	cin>>t;
	while(t--)
	{
		int n,k, sum = 0;
		cin >> n >> k;
		vector<int> v(n);

		for(int i=0;i<n; i++)
		{
			cin >> v[i];
			sum += v[i];
		}
		int count = 0;
		for(int i=0; i<n; i++)
			if(sum - v[i] < v[i] + k)
				count++;

		cout << count << endl;

	}
	return 0;
}
