#include<stdio.h>
int main()
{
    int h,m,a;
    scanf("%d",&h);
    a=h/60;
    m=h%60;
    printf("%d Hour(s)",a);
    printf(" %d Minute(s)",m);
}