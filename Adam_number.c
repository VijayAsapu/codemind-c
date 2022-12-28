#include<stdio.h>
int main()
{
    int n,q,r=0,s=0,a=0,b=0,c=0,d=0,e;
    scanf("%d",&n);
    q=n;
    a=n*n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    b=s*s;
    e=b;
    while(b!=0)
    {
        c=b%10;
        b=b/10;
        d=d*10+c;
    }
    if(a==d)
    printf("True");
    else
    printf("False");
}