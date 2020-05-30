#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number");
    scanf("%d" ,&n);
    printf("all odd number from 1 to %d are:",n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n" ,i);
        }
    }
}
/*without using if loop
    for(i=1;i<=n;i+=2)
    {
        printf("%d\n", i);
    }
}
*/
