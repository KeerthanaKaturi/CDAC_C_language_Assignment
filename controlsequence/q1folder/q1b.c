#include<stdio.h>
void main()
{
	int i,j;
	scanf("%d %d",&i,&j);
	(i>40 && j>40)?printf("Both variables are not lessthan or equal to 40"):
	(((20<i)||(20<j))?printf("Both variables are lessthan or equal to 40"):
	((i==20 || j==20)?printf("Atleast one variable is having 20"):
	printf("Both variables are not having 20")));
}
