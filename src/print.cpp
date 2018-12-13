#include <iostream>

using namespace std;

typedef struct data
{
	int a;
	int b;
}data;

void swap(int *a, int* b)
{
	int t = *a;
	a = b;
	*b = t;
}

int main()
{
	int* a = new int(5);
	int *b = new int(6);
	// *a = 5; *b = 6;
	swap(a, b);
	// a =b;
	cout<<*a<<*b<<endl;

	data *dat1 = new data();
	data *dat2 = new data();

	dat1->a = 10; dat1->b = 20;
	dat2 = dat1;
	cout<<dat2->a<<dat2->b<<endl;
	return 0;
}