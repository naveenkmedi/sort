#include <stdio.h>


int binarySearch(int a[], int item, int low, int high)
{
    if(high <= low)
    {
    	if(item > a[low])
        	return low+1;
		else
			return low;
	}
 
    int mid = (low + high)/2;
 
    //if(item == a[mid])
      //  return mid+1;
 
    if(item > a[mid])
        return binarySearch(a, item, mid+1, high);
    return binarySearch(a, item, low, mid-1);
}

void insertionSort(int a[], int n)
{
    int i, loc, j, item;
 
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        item = a[i];
 
        // find location where selected sould be inseretd
        loc = binarySearch(a, a[i], 0, i-1);
 
        // Move all elements after location to create space
        while (j >= loc)
        {
            a[j+1] = a[j];
            j--;
        }
        a[loc] = item;
        //printf("a[%d] = %d, selected = %d\n", i, a[i], selected);
    }
}
 

int main(void)
{
	int ins = 0;
	int n = 10;
	int compare = 0;

	int ip[11] = {37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54};
	
	insertionSort(ip, n);
		

	printf("\n");

	for(int i = 0; i < n; i++)
		printf("%d,\t", ip[i]);
	//printf("\n count = %d\t compare= %d\n", count , ins);
}