#include<stdio.h>
int main()
{
	int n,p;
	printf("Enter n");
	scanf("%d",&n);
	printf("\nBefore clearing:%x",n);
	printf("\nEnter the position");
	scanf("%d",&p);
	p--;
	n = n & (~(1<<p));
        printf("\nAfter clearing:%x",n);
return 0;
}
