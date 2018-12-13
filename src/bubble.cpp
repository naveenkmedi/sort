//bubble sort
#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void bubbleSort(int ip[], int n)
{
	for(int j = 0; j < n-1; j++)
	{
		for(int i = 0; i < n-1-j; i++)
		{
			if(ip[i] > ip[i+1])
			{
				
				swap(ip[i], ip[i+1]);
			}
		}
	}
}

void printArray(int ip[], int n)
{
	for(int i = 0; i < n; i++)
		cout<<ip[i]<<"  ";
	cout<<endl;
}


int main()
{
	// int ip[] = {1,5,16,9,3,7,6,51,19,87,63};
	int ip[] = {87,  63,  51,  19,  16,  9,  7,  6,  5,  3,  1};
	int n = sizeof(ip)/sizeof(ip[0]);
	bubbleSort(ip, n);

	printArray(ip,n);
	return 0;
}