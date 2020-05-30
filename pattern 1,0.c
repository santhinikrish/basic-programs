#include<stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++,printf("\n"))
    {
        for(j=1;j<=i;j++)
        {
            if(i==1||i==n||j==1||j==i)
                printf("1");
            else
                printf("0");
        }
        //printf("\n");
    }
}
