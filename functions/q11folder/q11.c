#include <stdio.h>
int index(int k[],int size,int t)
{
	int i;
	int j=size -1;
	for(i = size -1;i>=0;--i)
	{
		if(k[i] == t)
		{
			printf("\n %d rightmost occurance is %d\n",t,j);
			break;
		}
		j--;
	}
}
int main()
{
	int i,s[40],sz,t;
	printf("\n enter the size of an array: ");
	scanf("%d",&sz);
	printf("Enter elements of array: ");
	for(i =0;i<sz;i++)
	{
		scanf("%d",&s[i]);
	}
	printf("Enter the number to be found");
	  scanf("%d",&t);
	  index(s,sz,t);
	  return 0;
}

