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

int height(bTree *head)
{
	if(head != NULL)
	{
		return 1 + max(height(head->left), height(head->right));
	}
	return 0;
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
	bTree* node11 = new bTree();

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
	node10->data = 64;

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
	node4->right = NULL; //node10;
	// node5->right = NULL;
	node6->right = node9;
	node8->left = NULL;
	node8->right = NULL;

	node9->left = NULL;
	node9->right = NULL;
	node10->left = NULL;
	node10->right = NULL;

	// bTree* head = new bTree();
	// bTree* node1 = new bTree();
	// bTree* node2 = new bTree();
	// bTree* node3 = new bTree();
	// bTree* node4 = new bTree();
	// bTree* node5 = new bTree();
	// bTree* node6 = new bTree();
	// bTree* node7 = new bTree();
	// bTree* node8 = new bTree();
	// bTree* node9 = new bTree();

	// head->data = 0;
	// node1->data = 1;
	// node2->data = 2;
	// node3->data = 3;
	// node4->data = 4;
	// node5->data = 5;
	// node6->data = 6;
	// node7->data = 7;
	// node8->data = 8;
	// node9->data = 9;


	// head->left = node1;
	// head->right = node2;
	// node1->left = node3;
	// node1->right = node4;
	// node2->left = node5;
	// node2->right = node6;
	// node3->left = node7;
	// node3->right = node8;
	// node4->right = node9;

	// node4->left = NULL;
	// node5->left = NULL;
	// node6->left = NULL;
	// node7->left = NULL;
	// node8->left = NULL;
	// node9->left = NULL;

	// // node4->right = NULL;
	// node5->right = NULL;
	// node6->right = NULL;
	// node7->right = NULL;
	// node8->right = NULL;
	// node9->right = NULL;



	// bTree* head = new bTree();
	// bTree* node1 = new bTree();
	// bTree* node2 = new bTree();
	// bTree* node3 = new bTree();
	// bTree* node4 = new bTree();
	// bTree* node5 = new bTree();
	// bTree* node6 = new bTree();
	// bTree* node7 = new bTree();
	// bTree* node8 = new bTree();
	// bTree* node9 = new bTree();
	// bTree* node10 = new bTree();
	// bTree* node11 = new bTree();


	// head->data = 0;
	// node1->data = 1;
	// node2->data = 2;
	// node3->data = 3;
	// node4->data = 4;
	// node5->data = 5;
	// node6->data = 6;
	// node7->data = 7;
	// node8->data = 8;
	// node9->data = 9;
	// node10->data = 10;
	// node11->data = 11;

	// head->left = node1;
	// node1->left = node5;
	// node5->left = node6;
	// node6->left = node7;
	// node7->left = node8;
	// node8->left = node9;

	// head->right = node2;
	// node2->right = node3;
	// node3->right = node4;
	// node6->right = node10;
	// node10->right = node11;

	// node2->left = NULL;
	// node9->left = NULL;
	// node10->left = NULL;
	// node11->left = NULL;
	// node3->left = NULL;
	// node4->left = NULL;

	// node1->right = NULL;
	// node5->right = NULL;
	// node7->right = NULL;
	// node8->right = NULL;
	// node9->right = NULL;
	// node4->right = NULL;



	printTree(head);
	cout<<"\n";

	cout<<height(head)<<endl;
	return 0;
}