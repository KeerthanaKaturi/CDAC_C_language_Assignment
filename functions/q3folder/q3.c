#include<stdio.h>
void swap(int *a,int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
int main()
{
	int n=20,m=30;
	printf("Before swapping n=%d,m=%d\n",n,m);
	swap(&n,&m);
	printf("After swapping n=%d,m=%d",n,m);
	return 0;
}
	
