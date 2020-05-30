#include<stdio.h>
int main()
{
    int a[3],b[3],i;
    int ap=0,bp=0;
    for(i=0;i<3;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
    scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
    if(a[i]>b[i])
    ap++;
    if(a[i]<b[i])
    bp++;
    }
    printf("%d %d",ap,bp);
    return 0;
}
/*

#include<stdio.h>

int a_triplet[3], b_triplet[3];
int alice_points = 0;
int bob_points = 0;

int main() {
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a_triplet[i]);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%d", &b_triplet[i]);
    }
    for(int i = 0; i < 3; i++) {
        if (a_triplet[i] > b_triplet[i]) alice_points++;
        if (a_triplet[i] < b_triplet[i]) bob_points++;
    }
    printf("%d %d\n", alice_points, bob_points);
    return 0;
}*/
