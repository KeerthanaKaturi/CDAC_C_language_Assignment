#include<stdio.h>
int main()
{
	int n,p;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("\nThe number is %x",n);
	printf("\nEnter the position:");
	scanf("%d",&p);
	p--;
	n = (n>>p) & 1;
	if(n)
		{
			printf("\nSet");
			return 0;
		}
	printf("\nNot set");
	return 0;
}
