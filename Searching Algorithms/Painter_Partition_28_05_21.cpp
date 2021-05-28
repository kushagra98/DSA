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


// [1,2,3,4,5,7,6]

bool jobDone(int t, vector<int> &boards, int num_of_painters)
{	
	int n = boards.size();
	int reqd_painters = 1;
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		sum += boards[i];
		if(sum > t)
		{	
			reqd_painters++;
			sum = boards[i];
		}
	}

	return reqd_painters <= num_of_painters;
}


int minimumTime(vector<int> &boards, int num_of_painters)
{	
	int minimumLength = INT_MAX;
	int sum = 0;
	for(auto x : boards)
	{
		minimumLength = min(minimumLength,x);
		sum += x;
	}

	int start = minimumLength; 
	int end = sum;

	int ans = sum;
	
	while(start <= end)
	{
		int mid = (start + end) / 2;

		if(jobDone(mid,boards,num_of_painters))
		{
			ans = mid;
			end = mid-1;
		}
		else
		{
			start = mid+1;
		}
	}

	return ans;
}


signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
		
	vector<int> boards = {5,4,1,2,8,6};
	int num_of_painters = 2;

	cout << minimumTime(boards,num_of_painters);



	return 0;
}
	