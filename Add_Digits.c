#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    while(n>9)
    {
        s=0;
        while(n!=0)
    {
        i=n%10;
        n=n/10;
        s=s+i;
    }
    n=s;
    }
    printf("%d",s);
}