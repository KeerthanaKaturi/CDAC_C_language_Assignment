#include<stdio.h>
void main()
{
	int n,r=0,t,s=0;
	scanf("%d",&n);
	t=n;
	for(;n!=0;n=n/10)
	{
		r=(n%10);
		s=s+(r*r*r);
	}
	if(s==t)
		printf("The number is armstrong");
	else
		printf("The number is not armstrong");
}
