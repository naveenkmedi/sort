//https://www.geeksforgeeks.org/find-the-first-missing-numbers
#include <iostream>

using namespace std;


int find(int arr[], int size, int min, int max)
{
	if(min >= max)
		return max+1;
	int mid = min + max;
	mid /= 2;
	if(arr[mid] == mid)
	{
		return find(arr, size, mid+1, max); 		//search on right
	}
	else
	{
		return find(arr, size, min, mid-1); //search on left
	}
}

int main()
{
	int t;
	cout<<"enter t\t";
	cin>>t;
	int n,x,y;
	while(t--)
	{
		n = 10;
		// cout<<"enter n - "; cin>>n;

		int *arr2 = new int[100];

		// int* arr = new int[n];
		//cout<<"enter elements "; for(int i = 0; i< n; i++){cin>>arr[i];}
		int arr[10] = {0, 1,2, 3, 4, 5, 6, 7, 8, 12};//, 52};//, 16};
		cout<<find(arr, n, 0, n-1)<<endl;
		// delete [] arr;
	}
	return 0;
}
