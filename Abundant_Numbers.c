#include<stdio.h>
int main()
{
    int n,a,i,fc=0;
    scanf("%d",&n);
    a=n/2;
    for(i=1;i<=a;i++)
    {
        if(n%i==0)
        fc=fc+i;
    }
    if(fc>n)
    printf("True");
    else
    printf("False");
}