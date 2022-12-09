#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c=0;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    printf("%d %d %d ",a,b,b);
    for(i=4;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);    
    }
}