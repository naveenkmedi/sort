//https://www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/2
#include <iostream>
using namespace std;

typedef struct node
{
	int data;
	node * next;
}node;

void recPrint(node* node)
{
	if(node != NULL)
	{
		cout<<node->data<<"  ";
		recPrint(node->next);
	}
}

node* insertNum(node* head, int num)
{
	node* pos = new node();
	pos->data = num;



	node* curr = head, *prev = NULL;

	while(curr != NULL)
	{
		if(num < curr->data)
		{
			if(curr == head)
			{
				pos->next = head;
				return pos;
			}		
			pos->next = prev->next;
			prev->next = pos;
			return head;
		}
		prev = curr;
		curr= curr->next;
	}
	prev->next = pos;
	pos->next = NULL;
	return head;
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

	head->data = 6;
	head->next = node1;

	node1->data = 16;
	node1->next = node2;

	node2->data = 36;
	node2->next = node3;

	node3->data = 39;
	node3->next = node4;

	node4->data = 48;
	node4->next = node5;

	node5->data = 56;
	node5->next = node6;

	node6->data = 64;
	node6->next = NULL;

	recPrint(head);
	cout<<endl;

	head = insertNum(head, 5);
	recPrint(head);
	cout<<endl;

	head = insertNum(head, 73);
	recPrint(head);
	cout<<endl;

	return 0;
}