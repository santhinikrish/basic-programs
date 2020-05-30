#include<stdio.h>
void main()
{
    int n,rem,rem1;
    char a[100]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    scanf("%d",&n);
    if(n<=26)
    {
        printf("%c",a[n-1]);
    }
    if(n>26)
    {
        if(n%26==0)
        {
            rem1=n/26;
            printf("%c%c",a[rem1-2],a[25]);
        }
        else
        {
            rem=n%26;
            rem1=n/26;
            printf("%c%c",a[rem1-1],a[rem-1]);
        }
    }
}
