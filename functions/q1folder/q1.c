#include<stdio.h>
int numerator(int n)
{
	if(n==0)
		return 1;
	else
		return n*numerator(n-1);
}
int denominator(int r)
{
	if(r==0)
		return 1;
	else 
		return (r)*denominator(r-1);
}
int main()
{
	int a,b,n1,r1;
	float c;
	printf("Enter the value of n");
	scanf("%d",&a);
	printf("Enter the value of r");
	scanf("%d",&b);
	n1=numerator(a);
	r1=denominator(a-b);
	c=(float)n1/r1;
	printf("%f",c);
	return 0;
}
