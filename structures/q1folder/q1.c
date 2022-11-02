#include<stdio.h>
struct time
{
	int hrs;
	int min;
	int sec;
};
int main()
{
	struct time t1 = {2,45,30};
	printf("Time : %d:%d:%d",t1.hrs,t1.min,t1.sec);
	return 0;
}
