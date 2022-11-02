#include <stdio.h>
int main()
{
	int a[20];
	int n,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(int i=0;i < n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i] > a[j])
	 		{
		 		t=a[i];
		 		a[i]=a[j];
		 		a[j]=t;
	 		}
		}
	}
	printf("Largest value = %d",a[n-1]);
	printf("Second largest value = %d",a[n-2]);
	printf("Smallest value = %d",a[0]);
	printf("Second Smallest value = %d",a[1]);
	return 0;
}

