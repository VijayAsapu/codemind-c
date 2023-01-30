#include<stdio.h>
int main()
{
    int v,n,s=0;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    s=s+v;
    printf("%d",s);
}