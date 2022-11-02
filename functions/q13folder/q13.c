#include <stdio.h>
int fact(int );
float prob(int a)
{
	static float s=0;
	if(a==8)
		return s;
	else 
	{
		s= s+((float) a/fact(a));
		a++;
		return prob(a);
	}
}
int fact(int x)
{
	if(x ==0)
		return 1;
	else 
		return x*fact(x-1);
}
int main()
{
	int n=1;
	float result;
	result = prob(n);
	printf("Required sum = %.2f",result);
	return 0;
}
