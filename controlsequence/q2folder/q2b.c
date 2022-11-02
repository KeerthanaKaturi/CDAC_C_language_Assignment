#include<stdio.h>
void main()
{
	char k;
	printf("Enter a character");
	scanf("%c",&k);
	if(k=='a'|| k=='A')
		printf("A for Apple");

	else if(k=='b' || k=='B')
		printf("B for Bat");

	else if(k=='d' || k=='D')
		printf("D for Dog");

	else if(k=='f' || k=='F')
		printf("F for fan");
	else 
		printf("Character is not in the range");
}
