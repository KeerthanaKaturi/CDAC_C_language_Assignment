#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter the number: ");
	scanf(" %d",&n);
	while(n!=0)
	{
		int p = n&1;
		if(p)
			count++;
		n = n>>1;
	}
	printf("No. of ones = %d",count);
	return 0;
}
