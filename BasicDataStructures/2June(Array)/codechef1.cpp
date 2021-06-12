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

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

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
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        
        int q;
        cin >> q;

        vector<int> pre(n);
        
        pre[0] = v[0];
        
        for(int i=1; i<n; i++)
            pre[i] = pre[i-1] + v[i];

        while(q--)
        {
            int l,r;
            cin >> l>>r;
            
            l--;
            r--;
            
            if(l==0)
                cout << pre[r] << endl;
            else
                cout << pre[r] - pre[l-1] << endl;
        }

    }

    return 0;
}