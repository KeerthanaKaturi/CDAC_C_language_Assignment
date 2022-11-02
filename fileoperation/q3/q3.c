#include<stdio.h>

int main(int argc, char * argv[])
{
	FILE *fpin1,*fpin2,*fpout;
	char c;

	char * ptr1 = argv[1];
	char * ptr2 = argv[2];


	fpin1 = fopen(/*"source1.txt"*/ptr1,"r");
	if(fpin1 == NULL)
	{
		perror("Error opening file");
		return -1;
	}
	fpin2 = fopen(/*"source2.txt"*/ptr2,"r");
	if(fpin2 == NULL)
	{
		perror("Error opening file");
		return -1;
	}
	fpout = fopen("target.txt","w");
	if(fpout == NULL)
	{
		perror("Error opening file");
		return -1;
	}
	do
	{
		c = fgetc(fpin1);
		if(c == EOF)
			break;
		fputc(c,fpout);
	}
	while(1);
	do
        {       
                c = fgetc(fpin2);
                if(c == EOF)
                        break;
                fputc(c,fpout);
        }
        while(1);
	fclose(fpin1);
	fclose(fpin2);
	fclose(fpout);
	return 0;
}
	
