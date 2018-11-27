//gives the first occurance of a number in a sorted non-repeating array
#include <iostream>

using namespace std;


int search(int num, int min, int max, int arr[])
{
	int mid = (min + max)/2;
	if(min >= max)
	{
			return -1;
	}
	if(num < arr[mid])
	{
		return search(num, min, mid-1, arr);
	}
	
	if(num > arr[mid])
	{
		return search(num, mid+1, max, arr);
	}
	if(num == arr[mid])
	{
		if(num > arr[mid-1])
			return mid;
		else
			return search(num, min, mid-1, arr);
	}
}

int find(int num, int arr[], int size)
{
	int min = 0, max = size - 1, mid =( min+max)/2;
		return search(num, min, max, arr);
}

int main(int argc, char* argv[])
{
	int arr[10] = {0};
	for(int i = 0; i < 10; i++){arr[i] = 10*i;}
	arr[2] = 10;
	 // arr[3] = 10; 
	 // arr[4] = 10;

	for(int i = 0; i < 10; i++){cout<<arr[i]<<"\t";}

	int num = atoi(argv[1]); 
	int size = sizeof(arr)/sizeof(int);
	cout<<"\nnum = "<<num<<" pos = "<<find(num, arr, size)<<endl;
	return 0;
}