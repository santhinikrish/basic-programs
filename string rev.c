#include<stdio.h>
void main()
{
    char str[100];
    scanf("%[^\n]s",&str);
    int i,j,len,temp;
    for(len=0;str[len]!=0;len++);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        while(!(str[i]>=97 && str[i]<=122))
            i++;
        while(!(str[j]>=97 && str[j]<=122))
            j--;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);
}
