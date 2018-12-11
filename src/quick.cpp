/* C++ implementation QuickSort */
#include <iostream> 
using namespace std;
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout<<arr[i]<<" ";("%d ", arr[i]); 
	cout<<endl;
} 

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot 
	int pos = (low); // Index of smaller element 
	for (int j = low+1; j <= high- 1; j++) 
	{ 
		if (arr[j] <= pivot) 
		{ 
			swap(&arr[pos], &arr[j]); //safe gaurd the smaller elements
			pos++;
		} 
	} 
	swap(&arr[pos], &arr[high]); 
	return (pos); 
}

void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int pi = partition(arr, low, high); 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 

int main() 
{ 
	int arr[] = {10, 7, 8, 9, 1, 5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	quickSort(arr, 0, n-1); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 
