#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{	
	int n = v.size();
	for(int i=0; i<n; i++)
		cout << v[i] << " ";
	cout << endl;
}

void SelectionSort(vector<int> &v)
{	
	int n = v.size();
	for(int i=0; i<n; i++)
	{	
		int minElementIndex = i;
		for(int j=i+1; j<n; j++)
			if(v[j] < v[minElementIndex])
				minElementIndex = j;

		swap(v[i],v[minElementIndex]);
	}
	print(v);
}

int main()
{
   	vector<int> v = {5,4,3,1,6,7};
   	SelectionSort(v);
    return 0;
}