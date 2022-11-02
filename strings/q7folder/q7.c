#include<stdio.h>
#include<string.h>
int main()
{
	char s[] = "Keerthana is PG-DESD student and CDAC-Hyd student";
	char* token = strtok(s,"-");
	while(token != NULL)
	{
		printf("%s ",token);

		token = strtok(NULL,"-");
	}
	return 0;
}
