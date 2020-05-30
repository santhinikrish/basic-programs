#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,temp;
    printf("enter the integer");
    scanf("%d", &n);
    for(i=1;i<=n;++i)
    {
        printf("%d\t", a);
        temp=a+b;
        a=b;
        b=temp;
    }
}
