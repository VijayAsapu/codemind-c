#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d%d",&a,&n);
    for(i=a;i<=n;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}