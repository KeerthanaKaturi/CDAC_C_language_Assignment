#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void strreverse(char c[])
{
	int n;
	char t;
	n = strlen(c);
	int j = n-1;
	for(int i=0;i<n/2;i++)
	{
		t = c[i];
		c[i] = c[j];
		c[j] = t;
		j--;
	}
	printf("Reversed string :%s",c);
}
int main()
{
	char a[20];
	char b[20];
	char *c;
	int n;
	printf("Enter string a");
        scanf("%s",a);
	n=strlen(a);
	if(n<0)
	{
		perror("error in strlen");
		exit(EXIT_FAILURE);
	}
	printf("Length of string = %d\n",n);
	c = strcpy(b,a);
	if(c == NULL)
        {
                perror("error in strcpy");
                exit(EXIT_FAILURE);
        }
	printf("%s\n",b);
	n = strcmp(a,b);
	if (n == 0)
		printf("a and b are same\n");
	if(n <0)
        {
                perror("error in strcmp");
                exit(EXIT_FAILURE);
        }
	printf("Enter sting b\n");
	scanf("%s",b);
	strcat(a,b);
	if(c == NULL)
        {
                perror("error in strcat");
                exit(EXIT_FAILURE);
        }
	printf("Concatination: %s\n",a);
	strreverse(a);
	return 0;

}
		
