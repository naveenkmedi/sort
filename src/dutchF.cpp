// Dutch Flag algo
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *a, int *b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

void printarr(int a[], int n) 
{ 
	for (int i = 0; i < n; ++i) 
		printf("%d ", a[i]); 
	printf("\n"); 
} 

void dutchFlag(int a[], int size)
{
	int high = size -1, low = 0, mid = 0;
	while(mid <= high)
	{
		switch(a[mid])
		{
			case 1:
				swap(&a[mid], &a[low]);
				low++;
				mid++;
				break;
			case 4:
				mid++;
				break;
			case 9:
				swap(&a[mid], &a[high]);
				high--;
				break;
		}
	}
}

int main() 
{ 
	int a[] = {4, 9, 4, 4, 1, 9, 4, 4, 9, 4, 4, 1, 4}; 
	int size = sizeof(a) / sizeof(int); 

	printarr(a, size);
	dutchFlag(a, size); 
	printarr(a, size); 
	return 0; 
} 
