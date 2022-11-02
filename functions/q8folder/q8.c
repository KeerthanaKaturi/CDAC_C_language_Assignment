#include<stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
void npr(int s, int t)
{
	int num = fact(s);
	int deno = fact(s-t);
	int npr = num/deno;
	printf("npr = %d\n",npr);
}
void ncr(int s,int t)
{
	int num = fact(s);
	int deno = fact(s-t)*fact(t);
	float ncr = (float)num/deno;
	printf("ncr = %0.1f\n",ncr);
}
int main()
{
	int n,r;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter r:");
	scanf("%d",&r);
	npr(n,r);
	ncr(n,r);
	return 0;
}

