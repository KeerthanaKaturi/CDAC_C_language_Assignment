#include<stdio.h>
int main()
{
	int n,a[20],b[20],c[20],j=0,k=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2 == 0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{ 
			c[k]=a[i];
			k++;
		}

	}
	for(int i=0;i<j;i++)
		printf("%d ",b[i]);
	printf("\n");
	for(int i=0;i<k;i++)
		printf("%d ",c[i]);
	return 0;
}

