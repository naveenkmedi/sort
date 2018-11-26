#include <stdio.h>

int search(int arr[], int item, int low, int high)
{
	if(high < low)
	{
		return -2;
	}
	
	int mid = (low + high) / 2;

	//check for equality
	if(item == arr[mid])
		return mid;
	if(item > arr[mid])
		//search on the left
		return search(arr, item, low, mid-1);

	else
		//search on the right
		return search(arr, item, mid+1, high);
}

int main()
{
	int low = 0; int high = 9;
	int ip[10] = {10,9,8,7,6,5,4,3,2,1};

	int item = -15;
	int pos = search(ip, item, low, high);

	printf("%d\n", pos+1);
	return 0;
}