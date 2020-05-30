#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }
    }
}
