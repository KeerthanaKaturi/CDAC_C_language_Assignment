#include<stdio.h>
#define FACTORIAL(n) for(i=1;i<=n;i++)\
				f=f*i;\
				printf("\nFactorial= %d",f);\
			
int main()
{
	int n,f=1,i;
	printf("\nEnter the number:");
	scanf("%d",&n);
	FACTORIAL(n);
	return 0;
}



