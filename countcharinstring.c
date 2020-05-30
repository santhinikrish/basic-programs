#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,count=0;
    char a[100],c;
    scanf("%s",&a);
    scanf("%c",&c);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==c){
            count++;
        }
    }
    printf("%d",count);
}
