#include<stdio.h>
void main()
{
    int i,n1,n2,a[100],c;
    scanf("%d %d",&n1,&n2);
    c=n1+n2;
    for(i=0;c>0;i++)
    {
        a[i]=c%2;
        c/=2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
