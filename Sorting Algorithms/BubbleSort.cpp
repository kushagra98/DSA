#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{	
	int n = v.size();
	for(int i=0; i<n; i++)
		cout << v[i] << " ";
	cout << endl;
}

void BubbleSort(vector<int> &v)
{	
	int n = v.size();
	for(int i=0; i<n-1; i++)  
	{
		for(int j=0; j<n-i-1; j++)
			if(v[j] > v[j+1])
				swap(v[j],v[j+1]);
	}
	print(v);
}

int main()
{
   	vector<int> v = {5,4,3,1,6,7};
   	BubbleSort(v);
    return 0;
}