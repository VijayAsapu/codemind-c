#include<stdio.h>
int main()
{
    int d,y,w;
    scanf("%d",&d);
    y=d/365;
    printf("%d
",y);
    w=(d%365)/7;
    printf("%d",w);
}