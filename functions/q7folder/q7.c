#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[20],b[20];
	for(int i=0;i<20;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("\n");
	for(int i=0;i<20;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	for(int i=0;i<20;i++)
	{
		b[i] = tolower(a[i]);
	}
	for(int i=0;i<20;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
