#include<stdio.h>
void main()
{
    int i,n,a[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=sum-a[i];
        printf("%d ",a[i]);
    }
    printf("\n%d ",a[2]);
}
/*output
5
10 20 30 40 50
140 130 120 110 100
120
*/
