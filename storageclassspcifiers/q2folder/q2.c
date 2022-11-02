#include<stdio.h>
void increment()
{
	auto int i = 1;
	printf("%d\n",i++);
}
void incrementstatic()
{
	static int i = 1;
	printf("%d\n",i++);
}
int main()
{
	increment();
	increment();
	increment();
	incrementstatic();
	incrementstatic();
	incrementstatic();
	return 0;
}

