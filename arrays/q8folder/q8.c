#include<stdio.h>
int main()
{
	int l,n,x,a[20];
	printf("Enter n");
	scanf("%d",&l);
	for(int i=0;i<l;i++)
		scanf("%d",&a[i]);
	printf("Enter the position: ");
	scanf("%d",&n);
	printf("Enter the number to be inserted: ");
	scanf("%d",&x);
	for(int i=l-1;i>=n-1;i--)
			{
			a[i+1]=a[i];
			}
	a[n-1]=x;
	for(int i=0;i<=l;i++)
		printf("%d ",a[i]);
	return 0;
}
