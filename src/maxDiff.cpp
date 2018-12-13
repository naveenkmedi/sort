//https://practice.geeksforgeeks.org/problems/maximum-difference-between-node-and-its-ancestor/1
#include <iostream>
#include <unistd.h>
using namespace std;

typedef struct bTree{
	int data;
	bTree* left;
	bTree* right;
}bTree;

void printTree(bTree* head)
{
	if(head != NULL)
	{
		// usleep(100000);
		cout<<head->data<<" ";
		printTree(head->left);
		printTree(head->right);
	}
}

void verticalPrint(bTree* head)
{
	if(head != NULL)
	{
		verticalPrint(head->left);
		cout<<head->data<<" ";
		verticalPrint(head->right);
	}
}


int	maxDiff(bTree* head, int *max)
{
	// *max = 5;
	int diff = 0;
	if(head != NULL)
	{
		if((head->left != NULL) && (head->right != NULL))
		{
			if(head->left->data >= head->right->data)
				diff = head->data - head->right->data;
			else
				diff = head->data - head->left->data;	
		}

		else
		{
			diff = head->data; 
		}
			if(*max < diff)
				*max = diff;
		maxDiff(head->left, max);
		maxDiff(head->right, max);
	}
}
	


int main()
{
	bTree* head = new bTree();
	bTree* node1 = new bTree();
	bTree* node2 = new bTree();
	bTree* node3 = new bTree();
	bTree* node4 = new bTree();
	bTree* node5 = new bTree();
	bTree* node6 = new bTree();

	head->data = 5;
	node1->data = 10;
	node2->data = 20;
	node3->data = 30;
	node4->data = 40;
	node5->data = 50;
	node6->data = 60;

	head->left = node1;
	head->right = node2;
	node1->left = node3;
	node1->right = node4;
	node2->left = node5;
	node2->right = node6;

	node3->left = NULL;
	node4->left = NULL;
	node5->left = NULL;
	node6->left = NULL;

	node3->right = NULL;
	node4->right = NULL;
	node5->right = NULL;
	node6->right = NULL;

	printTree(head);
	cout<<"\n";

	verticalPrint(head);
	cout<<"\n";

	int max = 0;
	maxDiff(head, &max);
	cout<<max<<endl;

	return 0;
}