#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++)
	{
		b[i] = tolower(a[i]);	
	}
	printf("%s\n",b);
	for(int i=0;i<strlen(b);i++)
	{
		a[i] = toupper(b[i]); 
	}
	printf("%s\n",a);
	return 0;
}

