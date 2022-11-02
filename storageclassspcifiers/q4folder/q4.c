#include<stdio.h>
int main()
{
	register int x=10;
	auto int y=5;
	printf("x,y= %d,%d\n",x,y);
	{
		register int x;
		printf("x= %d\n",x);
		x=5;
		printf("x= %d\n",x);
	}
	{
		y=10;
		printf("x=%d\n",y);
	}
	printf("address of x,y= %d,%d",x,&y);//it will throw an error when we try to print address of a register
	return 0;
}

