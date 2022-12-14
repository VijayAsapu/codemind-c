#include<stdio.h>
int main()
{
    int j,r,k,i,fc=0;
    scanf("%d%d%d",&j,&r,&k);
    for(i=j;i<=r;i++)
    {
        if(i%k==0)
        fc=fc+1;
    }
    printf("%d",fc);
}