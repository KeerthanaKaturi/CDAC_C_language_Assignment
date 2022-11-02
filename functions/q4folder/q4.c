#include<stdio.h>
#define INTSIZE sizeof(int)
#define INTBITS INTSIZE*8-1
int rotateright(int n,unsigned int rotate)
{
	rotate = rotate%INTBITS;
	while(rotate--)
		n = ((n >> 1) & (~(1<< INTBITS))|((n & 1) << INTBITS));
	return n;
}
int main()
{
	int num;
	unsigned int rotation;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Enter number of rotations");
	scanf("%u",&rotation);
	printf("%d right rotated %u times = %d\n",num,rotation,rotateright(num,rotation));
	return 0;
}


