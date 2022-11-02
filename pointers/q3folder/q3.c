#include<stdio.h>
int main()
{
	char *color[6] = {"red","green","blue","white","black","yellow"};
	printf("%d\n",color);
	printf("%d\n",color+2);
	printf("%s\n",*color);
	printf("%s\n",*(color+2));
	printf("%s\n",*(color+5));
	printf("%s\n",color[5]);
	return 0;
}
	
