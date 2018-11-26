#include <stdio.h>

int ip[10] = {10,9,8,7,6,5,4,3,2,1};
int count = 0;
void swap(int i)
{
	count++;
	//printf("swapping");
	int a = ip[i]; int b = ip[i+1];
	ip[i] = b; ip[i+1] = a;
}

int main(void)
{
	int compare = 0;
	int n = 10;
	for(int j = 0; j< 9; j++)
	for(int i = 0; i < n-1; i++)
	{
		//check if i>i++ if yes swap
		if(ip[i] > ip [i+1])
		{
			compare++;
			swap(i);
		}
	}

	printf("\n");

	for(int i = 0; i < n; i++)
		printf("%d,\t", ip[i]);
	printf("\n count = %d\t compare= %d\n",count , compare);

}
