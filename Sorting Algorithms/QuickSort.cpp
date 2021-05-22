#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{	
	int n = v.size();
	for(int i=0; i<n; i++)
		cout << v[i] << " ";
	cout << endl;
}

int Partition(vector<int> &arr, int start, int end)
{
	int pivot = start;
	int j = start + 1;

	for(int i=start+1; i<=end; i++)
	{
		if(arr[i] < arr[pivot])
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
	swap(arr[pivot],arr[j-1]); // Getting exact position of pivot

	return j-1;
}

void QuickSort(vector<int> &arr, int start, int end)
{
	if(start < end)
	{
		int pivot = Partition(arr,start,end);
		QuickSort(arr,start,pivot-1);
		QuickSort(arr,pivot+1,end);
	}
}

int main()
{
   	vector<int> v = {5,4,3,1,6,7};
   	QuickSort(v,0,v.size()-1);
   	print(v);
    return 0;
}