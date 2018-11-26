#include <iostream>

using namespace std;


int search(int num, int min, int max, int arr[])
{
	int mid = (min + max)/2;
	if(min > max)
	{		
		if(num < arr[0])
		return -1;
		else return max;
	}	
	if(num < arr[mid])
	{
		return search(num, min, mid-1, arr);
	}
	
	if(num > arr[mid])
	{
		if(num > arr[mid+1])
		//go back and check
			return search(num, mid+1, max, arr);
		else
			return mid;
	}
	if(num == arr[mid])
	{
		return mid+1;
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
	for(int i = 0; i < 10; i++){arr[i] = 3*i;}

	//arr[3] = 4; arr[5] = 4;
	int num = atoi(argv[1]); 
	int size = sizeof(arr)/sizeof(int);
	cout<<"num = "<<num<<" pos = "<<find(num, arr, size)<<endl;
	return 0;
}