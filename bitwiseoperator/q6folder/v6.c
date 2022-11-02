#include<stdio.h>
int main()
{
	int n,p;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("\nBefore toggling: %x",n);
	printf("\nEnter position: ");
	scanf("%d",&p);
	p--;
	n = n ^ (1<<p);
	printf("\nAfter toggling:%d",n);
	return 0;
}
