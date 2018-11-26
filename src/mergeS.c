#include <stdio.h>


int merge(int arr[], int low, int mid, int high)
{
	int i, j, k;
    int n1 = mid - low + 1;
    int n2 =  high - mid;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = low; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int low, int high)
{
    if(low < high)
    {
    	int mid = (low + high - 1) / 2;
    	mergeSort(a, low, mid);
    	mergeSort(a, mid+1, high);
    	merge(a, low, mid, high);
    }
}

int main(void)
{
	int n = 11;

	int ip[11] = {37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54};
	
	mergeSort(ip, 0, n-1);

	for(int i = 0; i < n; i++)
		printf("%d,\t", ip[i]);
	printf("\n");
	//printf("\n count = %d\t compare= %d\n", count , ins);
}