#include<stdio.h>
#include<string.h>
int main()
{
	int size,i,j;
	char name[20][20],temp[20];
	printf("Enter no. of names: ");
	scanf("%d",&size);
	printf("\n Enter names: ");
	for(i =0;i<= size;i++)
	{
		gets(name[i]);
	}
	for(i=0;i<=size;i++)
	{
		for(j=i+1;j<=size;j++)
		{
			if(strcmp(name[i],name[j]) > 0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("\nSorted order of strings: \n");
	for(i=0;i<=size;i++)
		puts(name[i]);
return 0;
}
