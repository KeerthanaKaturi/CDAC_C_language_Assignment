#include <stdio.h>
void main()
{
	int m,n,a,b,c=0;
	printf("Enter any 2 numbers");
	scanf(" %d %d",&m,&n);
	b=m+n;
	a=(m>n)?m:n;
	b=b-a;
	for(int i=2;i<=b;i++)
	{
		if(b%i == 0)
		{
			if(a%i == 0)
				c++;
		}
	}
	if(c==0)
		printf("The numbers are relatively prime");
	else 
		printf("They are not");
}

