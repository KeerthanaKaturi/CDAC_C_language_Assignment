#include <stdio.h>
enum menu {add=1,sub,mul};
int main()
{
	int x;
	int a,b,c,d,r,i;
	printf("Enter the complex numbers\n");
	scanf("%d+i%d",&a,&b);
	scanf("%d+i%d",&c,&d);
	printf("Enter the choice of operation from 1-3: \n");
	scanf(" %d",&x);
	switch(x)
	{
		case add:
			{
				printf("The choice is addition\n");
				r= a+c;
				i= b+d;
				printf("Sum = (%d)+i(%d)\n",r,i);
				break;
			}
		case sub:
                        {
                                printf("The choice is subtraction\n");
                                r= a-c;
                                i= b-d;
                                printf("Difference = (%d)+i(%d)\n",r,i);
				break;
                        }
		case mul:
                        {
                                printf("The choice is multiplication\n");
                                r= (a*c)-(b*d);
                                i= (a*d)+(b*c);
                                printf("Product = (%d)+i(%d)\n",r,i);
				break;
                        }
		default: 
			printf("Invalid choice");
	}
	return 0;
}



