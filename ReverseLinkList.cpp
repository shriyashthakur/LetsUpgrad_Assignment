//Print reverse of a Linked List without actually reversing.
#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};
void printReverse(Node* head)
{
	stack<int> st;
	Node *curr = head;
	while(curr!=NULL)
	{
	st.push(curr->data);
	curr = curr->next;
	}
	while(st.empty()!=true)
	{
	cout << st.top()<<" -> ";
	st.pop();
	}
}
void printList(Node *head)
{
Node *curr = head;
while(curr!=NULL)
{
	cout << curr->data << " -> ";
	curr = curr->next;
}
cout<<"\n";
}
void push(Node** head_ref, char new_data)
{
	// allocate node 
	Node* new_node = new Node();

	// put in the data
	new_node->data = new_data;

	// link the old list off the new node 
	new_node->next = (*head_ref);

	// move the head to point to the new node 
	(*head_ref) = new_node;
}
int main()
{
	Node* head = NULL;
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	printList(head);
	printReverse(head);
	return 0;
}

