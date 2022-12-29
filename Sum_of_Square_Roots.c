#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,r=0,fc=0,i;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        r=sqrt(i);
        fc=fc+r;
    }
    printf("%.2f",fc);
}