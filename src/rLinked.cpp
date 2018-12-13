//reverse a linked list
#include <iostream>
using namespace std;

typedef struct node
{
	int data;
	node * next;
}node;

void printList(node* node)
{
	for(; node != NULL; node = node->next)
	{
		cout<<node->data<<"  ";
	}
	cout<<endl;
}

void recPrint(node* node)
{
	if(node != NULL)
	{
		cout<<node->data<<"  ";
		recPrint(node->next);
	}
}

node* reverse(node* head)
{
	node* curr = NULL, *prev = NULL;
	while(head != NULL)
	{
		prev = curr; //copy prev
		curr = head; // copy curr
		head = head->next; // save next
		curr->next = prev; // point to prev
	}
	return curr;
}

int main()
{
	node* head = new node();
	node* node1 = new node();
	node* node2 = new node();
	node* node3 = new node();
	node* node4 = new node();
	node* node5 = new node();
	node* node6 = new node();

	head->data = 10;
	head->next = node1;

	node1->data = 56;
	node1->next = node2;

	node2->data = 15;
	node2->next = node3;

	node3->data = 9;
	node3->next = node4;

	node4->data = 8;
	node4->next = node5;

	node5->data = 16;
	node5->next = node6;

	node6->data = 31;
	node6->next = NULL;

	printList(head);

	head = reverse(head);
	recPrint(head);
	cout<<endl;

	return 0;
}