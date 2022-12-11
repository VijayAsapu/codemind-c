#include<stdio.h>
int main()
{
    int a,b,i,fc=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0 && i%3==0)
        fc=fc+1;
    }
    printf("%d",fc);
}