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

	int val;
	Node *next;

	Node(int x) 
	{
		val = x;
		next = NULL;
	}
};



Node *head = new Node(0);


void printLL() 
{
	Node *ptr = head;

	while(ptr != NULL)
	{
		cout << ptr->val << " ";
		ptr = ptr->next;
	}
	cout << endl;
}

void insertAtBeginning(int x)
{
	Node *newNode = new Node(x);

	newNode -> next = head;
	head = newNode;

	// TC = O(1)
}

void insertAtEnd(int x)
{
	Node *newNode = new Node(x);

	Node *ptr = head;
	while(ptr->next != NULL)
		ptr = ptr -> next;

	ptr -> next = newNode;

	// TC : O(N)

}

void insertAtMiddle(int x, int position)
{
	Node *newNode = new Node(x);

	int count = 1;

	Node *ptr = head;
	
	while(ptr != NULL)
	{
		ptr = ptr->next;
		count++;

		if(count == position)
			break;
	}

	newNode -> next = ptr -> next;
	ptr->next = newNode;
}

void deleteAtBeginning()
{
	head = head->next;
}

void deleteAtEnd()
{
	Node *ptr = head;
	while(ptr -> next -> next != NULL)
		ptr = ptr->next;

	ptr->next = NULL;
}

void deleteAtMiddle(int position)
{
	Node *ptr = head;
	int count = 1;
	while(ptr != NULL)
	{
		ptr = ptr->next;
		count++;

		if(count == position-1)
			break;
	}

	ptr -> next = ptr -> next -> next;
}


signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	Node *A = new Node(5);  // A(5)->NULL
	Node *B = new Node(6);  // B(6)->NULL

	A->next = B; // A(5) -> B(6) -> NULL

	Node *C = new Node(7); // C(7)->NULL

	B->next = C;  // A(5) -> B(6) -> C(7) -> NULL

	head -> next = A;

	printLL();
	
	// <------------- OPERATIONS ------------>

	insertAtBeginning(10);
	insertAtBeginning(10);
	printLL();

	insertAtEnd(11);
	printLL();


	insertAtMiddle(100,3);
	printLL();

	deleteAtBeginning();

	printLL();

	deleteAtEnd();

	printLL();

	deleteAtMiddle(3);
	printLL();
	
	return 0;
}
	