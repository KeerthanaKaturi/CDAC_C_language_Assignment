#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
float div(int a,int b)
{ 
	return (float)a/b;
}
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	char k;
	int a,b,n;
	printf("Enter the choice ");
	scanf("%c",&k);
	switch(k)
	{
		case '+': printf("Enter a,b: ");
		  scanf("%d,%d",&a,&b);
		  int sum = add(a,b);
		  printf("Sum = %d",sum);
		  break;
		case '-': printf("Enter a,b: ");
		  scanf("%d,%d",&a,&b);
		  int diff = sub(a,b);
		  printf("diff = %d",diff);
		  break;
		case '*': printf("Enter a,b: ");
		  scanf("%d,%d",&a,&b);
		  int product = mul(a,b);
		  printf("Product = %d",product);
		  break;
		case '/': printf("Enter a,b: ");
		  scanf("%d,%d",&a,&b);
		  float Quotient = div(a,b);
		  printf("Quotient = %f",Quotient);
		  break;
		case '!': printf("Enter n: ");
		  scanf("%d",&n);
		  int facto = fact(n);
		  printf("Factorial = %d",facto);
		  break;
		default:
		  printf("Invalid choice of operation");
		  break;
	}
		  
return 0;
}
