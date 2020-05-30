#include<stdio.h>
void main()
{
    int n;
    printf("enter the integer:");
    scanf("%d" ,&n);
    if(n%2==0)
        printf("the number is even", n);
    else
        printf("the number is odd", n);
}
