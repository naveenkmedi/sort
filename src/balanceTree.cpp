// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

#include <iostream>
using namespace std;

typedef struct bTree{
	bTree *left;
	bTree *right;
	int data;
}bTree;


void printTree(bTree *head)
{
	if(head != NULL)
	{
		cout<<head->data<<" ";
		printTree(head->left);
		printTree(head->right);
	}
}

int checkBalance(bTree *head)
{
	static int i = 0;
	if(head != NULL)
	{
		if(head->left != NULL)
		{
			i++;
			checkBalance(head->left);
		}
		if(head->right != NULL)
		{
			i--;
			checkBalance(head->right);
		}
	}
	return i;
}

int height(bTree *head)
{
	// int i = 0;
	static int i = 0;
	if(head != NULL)
	{
		int leftH = 0, rightH = 0;
		if(head->left != NULL)
		{
			height(head->left);
			leftH++;
		}
		if(head->right != NULL)
		{
			height(head->right);
			rightH++;
		}
		i += ((leftH >= rightH ? leftH : rightH));
		return i;
	}
	return i;
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
	bTree* node7 = new bTree();
	bTree* node8 = new bTree();
	bTree* node9 = new bTree();
	bTree* node10 = new bTree();
	// bTree* node8 = new bTree();

	head->data = 5;
	node1->data = 10;
	node2->data = 20;
	node3->data = 30;
	node4->data = 40;
	node5->data = 50;
	node6->data = 60;
	node7->data = 56;
	node8->data = 67;
	node9->data = 35;

	head->left = node1;
	head->right = node2;
	node1->left = node3;
	node1->right = node4;
	node3->left = node5;
	node5->right = node6;

	node2->left = NULL;
	node4->left = NULL;
	node5->left = NULL;
	node6->left = node8;
	node2->right = node7;


	node7->right = NULL;
	node4->right = NULL;
	// node5->right = NULL;
	node6->right = node9;
	node8->left = NULL;
	node8->right = NULL;

	node9->left = NULL;
	node9->right = NULL;

	printTree(head);
	cout<<"\n";

	cout<<height(head)<<endl;
	return 0;
}