#include<bits/stdc++.h>
using namespace std;


int BS_recursive(vector<int> &arr, int key, int start, int end)
{
	if(start > end)
		return 0;

	int mid = (start + end) / 2;
	if(key == arr[mid])
		return 1;

	if(key < arr[mid])
		return BS_recursive(arr,key,start,mid-1);
	
	return BS_recursive(arr,key,mid+1,end);
}

int BS(vector<int> &arr, int key)
{
	int start = 0, end = arr.size()-1;

	while(start <= end)
	{
		int mid = (start + end) / 2;

		if(key == arr[mid])
			return 1;

		if(key > arr[mid])
			start = mid+1;
		else
			end = mid-1;
	}
	return 0;
}


int numOfComparison(vector<int> &arr, int key)
{
	int start = 0, end = arr.size()-1;
	int count = 0;
	while(start <= end)
	{
		int mid = (start + end) / 2;

		if(key == arr[mid])
		{	count++;
			return count;
		}

		if(key > arr[mid])
			start = mid+1;
		else
			end = mid-1;

		count++;
	}
	return count;
}


int floorOfArray(vector<int> arr, int key)
{
	int start = 0, end = arr.size()-1;
	int ans = -1;

	while(start <= end)
	{
		int mid = (start + end)/2;
		if(key == arr[mid])
			return arr[mid];
		if(key > arr[mid])
		{	
			ans = arr[mid];
			start = mid+1;
		}
		else
			end = mid-1;
	}
	return ans;
}





int main()
{
	vector<int> v = {4,5,7,18,19,21,56,78,100};
	// int key = 88;
	// cout << BS_recursive(v,key,0,v.size()-1) << endl;

	// cout << BS(v,11)<<endl;
	// cout << BS(v,4)<<endl;


	//cout << numOfComparison(v,1001);

	cout << floorOfArray(v,19);
	return 0;
}
	