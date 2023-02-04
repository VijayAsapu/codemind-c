#include<stdio.h>
int main()
{
    int n,r,p=1,s=0,t;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        p=p*r;
        s=s+r;
    }
    t=p-s;
    printf("%d",t);
}