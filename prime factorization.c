#include<stdio.h>
void main()
{
    int count=0,i,n;
    scanf("%d",&n);
    for(i=2;n!=1;i++)
    {
        count=0;
        while(n%i==0)
        {
            count++;
            n/=i;
        }
        if(count>=1)
        printf("%d ",i);
    }
}
