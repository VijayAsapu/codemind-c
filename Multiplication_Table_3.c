#include<stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d%d%d",&n,&i,&j);
    for(a=n;i<=j;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}