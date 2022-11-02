#include<stdio.h>
int divide(int n,int p)
{
	if(p == 0)
		return n;
	else 
		return divide(n/2,p-1);
}
int mul(int n,int p)
{
	if(p==0)
		return n;
	else
		return mul(2*n,p-1);
}
int main()
{
	int n1,n2,p1,p2;
	printf("Enter 2 numbers: ");
	scanf("%d,%d",&n1,&n2);
	printf("Enter 2 positions: ");
	scanf("%d,%d",&p1,&p2);
	int m= divide(n1,p1);
	n1 = (n1 >> p1);
	if(n1 == m)
		printf("Right shifting by n number of times = dividing by 2 n number of times");
	m= mul(n2,p2);
	n2 = (n2 << p2);
	if(n2 == m)
		printf("\nLeft shifting by n number of times = multiplying by 2 n number of times");
	return 0;
}

