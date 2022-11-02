#include <stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp = fopen("q4.c","r");
	if(fp == NULL)
	{
		perror("Error in opening file");
		return -1;
	}
	do
	{
		c = fgetc(fp);
		if(c == EOF)
			break;
		fputc(c,stdout);
	}
	while(1);
	fclose(fp);
	return 0;
}
