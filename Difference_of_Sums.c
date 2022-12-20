#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b,c=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=c+i;
        d=d+(i*i);
    }
    a=c*c;
    b=abs(a-d);
    printf("%d",b);
}