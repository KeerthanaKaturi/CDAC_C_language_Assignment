#include <stdio.h>
#include <string.h>
int reverse(char a[40],int n,int size)
{
	char temp;
	temp = a[n];
	a[n] = a[size - n];
	a[size - n] = temp;
	if(n == size/2)
		return a;
	return reverse(a,++n,size);
}

int main()
{
	char a[40];
	int size;
	printf("Enter a string\n");
	gets(a);
	puts(a);
	size = strlen(a);
	printf("\n Size = %d",size);
	reverse(a,0,size-1);
	printf("\n Reveresed string : ");
	puts(a);
	return 0;
}
