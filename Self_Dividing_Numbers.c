#include<stdio.h>
int fun(int n)
{
    int num,r,c=0,d=0;
    num=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        if(r!=0 && num%r==0)
        {
            c=c+1;
        }
        d+=1;
    }
    if(c==d)
    return 1;
    else
    return 0;
}

int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(fun(i)==1)
        printf("%d ",i);
    }
    
}