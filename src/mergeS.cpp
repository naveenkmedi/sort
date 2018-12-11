#include <iostream>
#include <unistd.h>
using namespace std;

void swap(int arr[], int left, int right)
{
	if(arr[left] > arr[right])
	{
		int temp = arr[right];
		arr[right] = arr[left];
		arr[left] = temp;
	}
}

void merge(int arr[], int left, int right)
{
	int mid = left+right;
	mid /= 2;
	int L[mid - left + 1], R[right - mid];
	for(int i = left; i <= mid; i++)
	{
		L[i-left] = arr[i];
	}

	for(int i = mid+1; i <= right; i++)
	{
		R[i-mid-1] = arr[i];
	}

	int j = 0; 
	int i = 0;
	int k = left;
	for(; (i< mid - left + 1) && (j < right - mid ); k++)
	{
		if((L[i] >= R[j]))
		{
			arr[k] = R[j];
			j++;
		}
		else
		{
			arr[k] = L[i];
			i++;
		}
	}

	for(;i< mid - left + 1; i++)
	{
		arr[k] = L[i];
		k++;
	}
	for(;j < right - mid; j++ )
	{
		arr[k] = R[j];
		k++;
	}
}


void mergeSort(int arr[], int left, int right)
{
	if(right > left)
	{
		int mid = left + right;
		mid /= 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, right);
	}
}

int main()
{
	int ip[13] = {61,2, 37, 6, 4, 15, 6,8, 125,39,11, 25};

	int n = sizeof(ip)/sizeof(ip[0]);
	for(int i = 0; i < n; i++)
		cout<<ip[i]<<"\t";
	cout<<endl;

	mergeSort(ip, 0, n-1);
	cout<<endl;
	for(int i = 0; i < n; i++)
		cout<<ip[i]<<"\t";
	cout<<endl;
	return 0;
}