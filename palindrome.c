#include<stdio.h>
void main()
{
int r,ri=0,n,onumm;
printf("Enter the number:");
scanf("%d", &n);
onumm=n;
while(n!=0)

    {
        r=n%10;
        ri=ri*10 + r;
        n/=10;
    }
    if(ri==onumm)
       printf("%d is a palindrome", onumm);
    else
       printf("%d is not a palindrome", onumm);
}
