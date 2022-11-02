#include<stdio.h>
void transpose(int c1,int r1,int b[20][20])
{
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
			printf("%d",b[j][i]);
		printf("\n");
	}
}

void main()
{
	int a[20][20];
	int r,c;
	scanf("%d,%d",&r,&c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
	transpose(r,c,a);
}

