#include <iostream>

using namespace std;


int search(int num, int min, int max, int arr[])
{
	int mid = (min + max)/2;
	if(min > max)
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
		return mid;
	}
}

int find(int num, int arr[], int size)
{
	int min = 0, max = size - 1, mid =( min+max)/2;
		return search(num, min, max, arr);
}

int main(int argc, char* argv[])
{
	int arr[10] = {2, 2, 2 , 2 , 2, 2 , 6, 7, 8,9};
	for(int i = 0; i < 10; i++){arr[i] = i;}
	int num = atoi(argv[1]); 
	int size = sizeof(arr)/sizeof(int);
	cout<<"num = "<<num<<" pos = "<<find(num, arr, size)<<endl;
	return 0;
}