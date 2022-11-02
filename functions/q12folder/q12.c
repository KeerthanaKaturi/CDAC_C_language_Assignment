#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	char s[20];
	scanf("%d",&n);
	printf("%d\n",n);
	atol(n,s,2);
	printf("%s",s);
	atol(n,s,10);
	printf("%s",s);
	atol(n,s,16);
	printf("%s",s);
	return 0;
}
