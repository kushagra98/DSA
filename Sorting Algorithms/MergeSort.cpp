#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{	
	int n = v.size();
	for(int i=0; i<n; i++)
		cout << v[i] << " ";
	cout << endl;
}

void Merge(vector<int> &v, int start, int mid, int end)
{
	vector<int> A(end-start+1);
	int p = start;
	int q = mid+1;
	int k = 0;

	for(int i=start; i<=end; i++)
	{
		if(p > mid)
			A[k++] = v[q++];
		else if(q > end)
			A[k++] = v[p++];
		else if(v[p] < v[q])
			A[k++] = v[p++];
		else
			A[k++] = v[q++];
	}

	for(int i=0; i<k; i++) // k = A.size(), Copy back the elements after merging
		v[start++] = A[i];
}

void MergeSort(vector<int> &v, int start, int end)
{	
	if(start < end)
	{
		int mid = (start + end) / 2;
		MergeSort(v,start,mid);
		MergeSort(v,mid+1,end);
		Merge(v,start,mid,end);
	}
}

int main()
{
   	vector<int> v = {5,4,3,1,6,7};
   	MergeSort(v,0,v.size()-1);
   	print(v);
    return 0;
}