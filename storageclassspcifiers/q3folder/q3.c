#include<stdio.h>
int a =10;
void fun1()
{
	printf("Global value of a = %d\n",a);
	printf("Static variable in other function cannot be accessed\n");
}
int fun2()
{
        static int p =5;
        printf("Value of static variable = %d\n",p++);
        printf("Value of global variable a = %d\n",a);
        return 0;
}
int main()
{
	static int k =5;
	printf("Value of static variable = %d\n",k++);
	printf("Value of global variable a = %d\n",a);
	fun1();
	fun2();
	fun2();
	fun2();
	return 0;
}
