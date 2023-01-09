#include<stdio.h>
int main()
{
    int n,q,r=0,s=1,a,b=0,c=0;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*r;
    }
    while(q!=0)
    {
        b=q%10;
        q=q/10;
        c=c+b;
    }
    a=s-c;
    printf("%d",a);
}