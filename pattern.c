#include<stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
                printf("%d",j+1);
            else
                printf(" ");
        }
        printf("\n");
    }
}
