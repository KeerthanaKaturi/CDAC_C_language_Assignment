#include <stdio.h>
#include "q1header.h"
extern int a;
void call1()
{
	// extern int a;
	printf("Accessed extern from another file=%d\n",a);
}
void calltofileb()
{
	// extern int a;
	printf("Accessed extern from another file=%d\n",a++);
	call1();
}
