//√[s(s-a)(s-b)(s-c)]
#include<stdio.h>
#include<math.h>
int main()
{
    float s=0,a,b,c,e;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    e=(s*(s-a)*(s-b)*(s-c));
    e=sqrt(e);
    printf("%.2f",e);
}