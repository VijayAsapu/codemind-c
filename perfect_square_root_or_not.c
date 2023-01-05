#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=0;
    scanf("%d",&n);
    a=sqrt(n);
    b=a*a;
    if(n==b)
    printf("True");
    else
    printf("False");
}