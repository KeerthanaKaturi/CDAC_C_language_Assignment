#include<stdio.h>
#include<string.h>
int replace(char *rat)
{
	int s=0;
	int l = strlen(rat);
	printf("%d\n",l);
	for(int i =0;i<l;i++)
	{
		if(rat[i] == ' ')
		{
			rat[i] = '-';
			s++;
		}
		//printf("%c\n",*(rat+i));
	}
	puts(rat);
	printf("\n");
	return s;
}

int main()
{
	char c[] = "The cat sat";
	char *cat;
	cat = c;
	puts(cat);
	printf("\n");
	int n = replace(cat);
	printf("No. of spaces =%d",n);
	return 0;
}
