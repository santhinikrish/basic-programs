#include<stdio.h>
#include<math.h>
void main()
{
    int n,temp,+rem,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n/=10;
    }
    if(sum==temp)
        printf("amstrong");
    else
        printf("not");
}
