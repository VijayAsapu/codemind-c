#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,i=0,s=0,m=0;
    scanf("%d",&n);
    q=n;
    i=pow((n),2);
    while(i!=0)
    {
        s=i%10;
        i=i/10;
        m=s+m;
    }
    if(q==m)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}