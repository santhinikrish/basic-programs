#include<stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char ch;
    scanf("%d %d ",&x,&y);
    scanf("%c",&ch);
    if((x>=0 && x<=5)&&(y>=0&&y<=5)){
        if(x<y && ch=='+'){
            printf("Valid");
        }else{
            printf("Invalid");
            return 0;
        }
        if(x>y && ch=='-'){
            printf("Valid");
        }else{
            printf("Invalid");
            return 0;
        }
    }else{
        printf("Invalid");
        return 0;
    }
}
