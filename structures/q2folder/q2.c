#include<stdio.h>
struct a
{
	int a1;
	char a2;
};
union b
{
	int b1;
	char b2;
};
int main()
{
	struct a p;
	union b k;
	printf("Size of structure: %ld",sizeof(p));
	printf("\nSize of union: %ld",sizeof(k));
	return 0;
}
