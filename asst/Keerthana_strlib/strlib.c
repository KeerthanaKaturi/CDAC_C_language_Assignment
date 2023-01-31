#include<stdio.h>
#include"str_header.h"
int main()
{
    int n;
    char s1[10]="Keerthana";
    char s2[10]="Katuri";
    n=str_len(s1);
    printf("The string is %s\nThe length of string is %d\n",s1,n);
    char s3[10];
    str_cpy(s3,s1);
    printf("\nThe copied string is %s\n",s3);
    int m=str_cmp(s1,s2);
    printf("\nThe comparision result is %d",m);
    if(m != 0)
    {
        printf("\nStrings are different\n");
    }
    else
    {
       printf("\nStrings are same\n"); 
    }
    printf("\nThe strings before concatination are %s\t%s\n",s1,s2);
    str_cat(s1,s2);
    printf("The concatinated string is %s\n",s1);
    str_rev(s1);
    printf("\nReversed string is %s\n",s1);
    return 0;
}