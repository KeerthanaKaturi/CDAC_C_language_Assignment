#include<stdio.h>
int a=5;
void fun2()
{
	printf("a=%d\n",a);
}
int main()
{
	int a=2;
	printf("a=%d\n",a);
	fun2();
	{ 
		int a= 3;
		printf("a=%d\n",a);
	}
	printf("a=%d\n",a);
	return 0;
}

