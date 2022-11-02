#include<stdio.h>
void main()
{
	int n,t,r=0,s=0;
	printf("Enter the number");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r= n%10;
		s= (10*s)+r;
		n= n/10;
	}
	if(s==t)
		printf("The number is palindrome");
	else
		printf("Not palindrome");
}


