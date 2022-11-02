#include<stdio.h>
void main()
{
	int a[20],b[20],c[20];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
		c[n-1-i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
}




