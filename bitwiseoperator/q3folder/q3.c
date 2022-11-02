#include<stdio.h>
int main()
{
	int n,m;
	char a;
	printf("Enter a number");
	scanf("%x",&n);
	printf("\nOriginal number = %x",n);
	printf("\nEnter choice from 1-4");
	scanf("%d",&m);
	switch(m)
	{
		case 1: n = ~n;
			printf("\nOne's complement = %x",n);
			break;
		case 2: printf("\nEnter type of mask,&,|,^: ");
			scanf(" %c",&a);
			if(a == '|')
				n = n | 15;
			if(a == '&')
				n = n & 240;
			if(a == '^')
				n = n ^ ~n;
				printf("\nLower nibble Masked output = %x",n);
			break;
		case 3: n = n >> 4;
		        printf("\nLower nibble shifted output = %x",n);
			break;
		default: break;
	}
	return 0;
}
