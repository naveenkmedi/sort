//print a binary tree
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
		printTree(head->left);
		cout<<head->data<<" ";
		printTree(head->right);
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

	head->data = 6;
	node1->data = 10;
	node2->data = 25;
	node3->data = 30;
	node4->data = 45;
	node5->data = 50;
	node6->data = 65;

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

	return 0;
}