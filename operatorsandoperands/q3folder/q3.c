#include<stdio.h>
void main()
{
	int a,b,max;
	printf("Enter the values of a,b:");
	scanf("%d,%d",&a,&b);
	max = (a>b)?a:b;
	printf("max number = %d",max);
}
