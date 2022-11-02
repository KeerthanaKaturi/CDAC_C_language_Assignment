#include <stdio.h>
int main()
{
	int n,p;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("\nNumber before setting = %x",n);
	printf("\nEnter position");
	scanf("%d",&p);
	p--;
	n = n | (1<<p);
	printf("\nAfter setting = %x",n);
	return 0;
}

