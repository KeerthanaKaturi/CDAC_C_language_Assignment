#include<stdio.h>
int largest(int *l,int n,int larg)
{
	if(n<0)
		return larg;
	else
	{
		if(*l > larg)
			larg = *l;
		largest(++l,--n,larg);	
	}
}


int main()
{
	int a[7];
	printf("Enter elements in array");
	for(int i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	int large = largest(a,6,a[0]);
	printf("Largest element in array = %d",large);
	return 0;
}
