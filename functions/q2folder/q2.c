#include<stdio.h>
int fact(int );
void main()
{
	int m,a;
	printf("Enter the value of n: ");
	scanf("%d",&m);
	a=fact(m);
	printf("Factorial of %d = %d",m,a);
}
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
