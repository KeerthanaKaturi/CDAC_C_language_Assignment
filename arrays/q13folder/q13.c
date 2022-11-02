#include<stdio.h>
int main()
{
	int a[20],rem=0,n;
	int seen[10]={0};
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter the numbers into array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		rem = a[i];
		if(seen[rem] >= 0)
			{
				seen[rem]++;
			}
	}


	for(int i=0;i<10;i++)
	{
		if(seen[i]>1)
		{
			printf("%d is repeated and frequency = %d\n",i,seen[i]);
		}
	}
	return 0;
}



