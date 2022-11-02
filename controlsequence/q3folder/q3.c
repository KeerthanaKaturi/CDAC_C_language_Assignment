#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%5 == 0)
		{
			continue;
		}
		else
		{
			sum = sum+i;
		}
	}
	printf("Sum of numbers = %d",sum);
}
