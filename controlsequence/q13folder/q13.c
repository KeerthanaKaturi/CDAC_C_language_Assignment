#include<stdio.h>
void main()
{
	int n,sod=0;
	scanf("%d",&n);
	for(;n!=0;n=n/10)
	{
		sod = sod + (n%10);
	}
	printf("%d",sod);
}
