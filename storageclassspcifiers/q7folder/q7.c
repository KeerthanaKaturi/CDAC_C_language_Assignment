#include<stdio.h>
static int i=5;
void fun1()
{
	printf("Global static i =%d\n",i++);
}
void fun2()
{
	static int i=1;
	printf("Static Local variable in function 2 =%d\n",i++);//It can retain the value during previous call
}

int main()
{
	static int i;
	printf("Default value of local static i =%d\n",i);
	fun1();
	fun1();
	fun1();
	fun2();
	fun2();
return 0;
}

