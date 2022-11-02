#include<stdio.h>
int main()
{
	int a[20];
	int n,b;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the number to be deleted");
	scanf("%d",&b);
	for(int i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			for(int j=i;j<n;j++)
			a[j]=a[j+1];
			i--;
			n--;
		}

	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
