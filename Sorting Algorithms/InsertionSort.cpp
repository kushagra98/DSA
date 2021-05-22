#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{	
	int n = v.size();
	for(int i=0; i<n; i++)
		cout << v[i] << " ";
	cout << endl;
}

void InsertionSort(vector<int> &v)
{	
	int n = v.size();

	for(int i=1; i<n; i++)
	{
		int temp = v[i];
		int j = i-1;
		while(j>=0 && v[j] > temp)
		{
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = temp;
	}
	print(v);
}

int main()
{
   	vector<int> v = {5,4,3,1,6,7};
   	InsertionSort(v);
    return 0;
}