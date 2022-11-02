#include <stdio.h>
#include <string.h>
int count;
int main()
{
	char *a;
	char* s[]={
		"we will teach you how to",
		"Move a mountain",
		"Level a building",
		"Erase the past",
		"Make a million"
	};
	int n = (sizeof s/sizeof(char *))-1;
	int j=0;
		while(j<n)
		{
			a = s[j];
			for(int i=0;a[i] != '\0';i++)
			{
				if(a[i]	== 'e')
					count++;
			}
				j++;
		}
	printf("No. of 'e's = %d",count);
return 0;
}	

