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


struct Node {
	int data;
	Node *next;

	Node (int x)
	{
		data = x;
		next = NULL;
	}
};

int cap = 5;
Node *dummy = new Node(0); ////   [0]-> x ->1 -> 2 -> 3
int cnt = 0;

int size()
{
	return cnt;
}

bool isEmpty()
{
	return size() == 0;
}

bool isFull()
{
	return size() == cap;
}

int top_element()
{
	if(isEmpty())
	{
		cout << "Stack is Empty"<<endl;
		return -1; 
	}
	return dummy->next->data;
}

void push(int x)
{	
	if(isFull())
	{
		cout << "Stack is full";
		return;
	}
	Node *newNode = new Node(x);

	newNode -> next = dummy->next;
	dummy->next = newNode;
	cnt++;
}

void pop()
{
	if(isEmpty())
	{
		cout << "Stack is Empty"<<endl;
		return; 
	}
	dummy->next = dummy->next->next;
	cnt--;
}

void printLL()
{	
	cout << "count is " << cnt << endl;
	Node *ptr = dummy->next;
	while(ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}

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
	