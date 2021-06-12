#include<bits/stdc++.h>
using namespace std;

#include<stack>


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

	stack<int> st;
	st.push(10);
	st.push(20);
	st.pop();
	cout << st.top();
	cout << st.size();
	cout << st.empty();
	
	return 0;
}
	