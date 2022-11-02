#include<stdio.h>
void main()
{
	char k;
	printf("Enter the character:");
	scanf("%c",&k);
	switch(k)
	{
		case 'a':
			printf("A for Apple");
			break;
		case 'A':
			printf("A for Apple");
			break;
		case 'b':
			printf("B for bat");
			break;
		case 'B':
			printf("B for bat");
			break;
		case 'D':
			printf("D for Dog");
			break;
		case 'd':
			printf("D for Dog");
			break;
		case 'F':
			printf("F for Fan");
			break;
		case 'f':
			printf("F for Fan");
			break;
		default:
			printf("Character is not in the range");
			break;
	}
}



