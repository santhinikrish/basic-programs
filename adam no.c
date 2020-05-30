#include<stdio.h>
void main()
{
    int n,sq,rem,sum=0,d,sq1,sum1=0;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n/=10;
    }
    sq1=sum*sum;
    while(sq1!=0)
    {
        d=sq1%10;
        sum1=sum1*10+d;
        sq1/=10;
    }
    if(sq==sum1)
        printf("adam");
    else
        printf("not adam");
}
