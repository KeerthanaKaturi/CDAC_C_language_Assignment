#include<stdio.h>
int main()
{
	unsigned int x = 0xA2C3;
	printf("x = %x",x);
	printf("\nx = %b",x);
	int a = ~x;
	printf("\nComplement of x = %x",a);
	a = x ^ 0x3f06;
	printf("\n x ^ 0x3f06 = %x",a);
	printf("\n%b",a);
	a = x | 0x3f06;
	printf("\n x | 0x3f06 = %x",a);
	a = x | ~0x3f06;
	printf("\n x | ~0x3f06 = %x",a);
	a = x >> 3;
	printf("\n x >> 3 = %x",a);
	a = x << 5;
	printf("\n x<<5 = %x",a);
	a = x ^ ~x;
	printf("\n x ^ ~x = %x",a);
	a = x | ~x;
	printf("\n x | ~x = %x",a);
	a = (x & ~0x3f06) << 8;
	printf("\n x & ~0x3f06 = %x",a);
	a = (x & ~(0x3f06 >> 8));
	printf("\n x & ~(0x3f06 >> 8) = %x",a);
return 0;
}
