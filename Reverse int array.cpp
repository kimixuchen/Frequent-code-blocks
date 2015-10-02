/**
*reverse the int array
**/
#include <iostream>
#include <cstring>
using namespace std;

const int M = 10;

void reverse(int a[], int begin, int end)
{
	int i = begin;
	int j = end;
	int tmp;
	while(i<j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}

int main(int argc, char* argv[])
{
	int a[M] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(a)/sizeof(int);
	printf("before:\n");
	for(int i=0; i<size; i++)
		printf("%d ", a[i]);
	printf("\n");
	
	int m = 4;
	reverse(a, 0, m-1);
	reverse(a, m, size-1);
	reverse(a, 0, size-1);
	
	printf("after:\n");
	for(int i=0; i<sizeof(a)/sizeof(int); i++)
		printf("%d ", a[i]);
	printf("\n");
}
