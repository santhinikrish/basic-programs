#include<stdio.h>
void main()
{
    int i,n;
    unsigned long long factorial=1;
    scanf("%d", &n);
    if(n<=0)
        printf("Error! negative integers are not supported:");
    else
    {
        for(i=1;i<=n;i++)
        {
            factorial=factorial*i;
        }
     printf("%d",factorial);
    }
}
