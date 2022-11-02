#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
			printf(" ");
		for(int j=i;j>0;--j)
			printf("%d",j);
		for(int j=2;j<=i;++j)
			printf("%d",j);
		printf("\n");
	}
	return 0;
	
}

