#include <stdio.h>
#include <stdlib.h>
// A linked list node
struct Node
{
  int data;
  struct Node *next;
};


int main(void)
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	  struct Node* third = NULL;
	   
	  // allocate 3 nodes in the heap  
	  head = (struct Node*)malloc(sizeof(struct Node)); 
	  second = (struct Node*)malloc(sizeof(struct Node));
	  third = (struct Node*)malloc(sizeof(struct Node));
	 
	  head->data = 1; //assign data in first node
	  head->next = second; // Link first node with 
	   
	  // assign data to second node 
	  second->data = 2; 
	 
	  // Link second node with the third node
	  second->next = third;
	  
	   
	  third->data = 3; //assign data to third node
	third->next = NULL;
	   
	struct Node* ptr = head;
	while(ptr != NULL)	  
	{
		printf("data = %d \t", ptr->data);
		ptr = ptr->next;
	}

	struct Node* ptr2 = second;

	ptr2->data = ptr2->next->data;
	ptr2->next = ptr2->next->next;

	printf("%d \t %p\t", ptr2->data, ptr2->next); //, ptr2->next->data); 	
	free(ptr2->next); 
	ptr2->next = NULL;
	printf("second - %d \t %p\t t data - %d\t", second->data, second->next, third->data); 

	free(ptr2->next);
	ptr2->next = NULL;
	printf("\n");
	printf("%d \t %p\t", ptr2->data, ptr2->next); //, ptr2->next->data); 


	printf("\n");	 	
	return 0;

}
