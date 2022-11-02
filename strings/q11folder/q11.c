#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	scanf("%s",a);
	printf("%s ",a);
	int n= strlen(a);
	for(int i=0;i<n-1;i++)
	{
		b[0]=a[0];
		for(int i =0;i<n;i++)
			a[i]=a[i+1];
		a[n-1] = b[0];
		printf("%s ",a);

	}
	return 0;
}
