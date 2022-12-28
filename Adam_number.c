#include<stdio.h>
int main()
{
    int a,b,c,d,e,n,q,s,temp;
    scanf("%d",&n);
    q=n;
    a=n*n;
    while(q!=0)
    {
        b=q%10;
        q=q/10;
        s=s*10+b;
    }
    c=s*s;
    d=c;
    while(d!=0)
    {
        e=d%10;
        d=d/10;
        temp=temp*10+e;
    }
    if(a==temp)
    printf("True");
    else
    printf("False");
}