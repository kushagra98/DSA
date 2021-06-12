#include<bits/stdc++.h>
using namespace std;

// #define int long long
#define ull unsigned long long
#define endl '\n'
#define pii pair<int, int>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()

const int cap = 5;
int st[cap];
int top = -1;

int size()
{
	return top+1;
}

bool isEmpty()
{
	return size() == 0;
}

bool isFull()
{
	return size() == cap;
}


void push(int x)
{	
	if(isFull())
	{
		cout << "st is Full";
		return;
	}
	top++;
	st[top] = x;
}

void pop()
{	
	if(isEmpty())
	{
		cout << "st is Empty"<<endl;
		return;
	}
	top--;
}



int top_element()
{
	return st[top];
}





signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	push(5);
	cout << top_element() << endl;
	//printLL();
	push(3);
	push(2);
	cout << top_element() << endl;
	pop();
	cout << top_element() << endl;
	push(5);
	push(5);
	push(3);
	push(2);

	return 0;
}
	