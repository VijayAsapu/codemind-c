#include<stdio.h>
int main()
{
    int a,b,sum=0,addi=0;
    float c,d,diff=0,sub=0;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    sum=a+c;
    addi=b+d;
    printf("%d %d
",sum,addi);
    diff=a-c;
    sub=b-d;
    printf("%.1f %.1f",diff,sub);
}