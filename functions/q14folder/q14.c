#include <stdio.h>
int fact(int n)
{
	if(n==1)
		return 1;
	else 
		return n*fact(n-1);
}
int gcd(int m,int o)
{
	if(o>m)
		return gcd(o,m);
	if(o == 0)
	       return m;
	else
	       return gcd(o,o%m);
}	
	
int main()
{
	int a,b,c;
	printf("Enter value of a for its factorial");
	scanf("%d",&a);
	b = fact(a);
	printf("factorial = %d",b);
	printf("Enter value of a,b for gcd");
	scanf("%d %d",&a,&b);
	c = gcd(a,b);
	printf("GCD = %d",c);
}


