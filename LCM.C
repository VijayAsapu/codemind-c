#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=(a>b)?a:b;
    while(1)
    {
        if(c%a==0 && c%b==0)
        {
            d=c;
            break;
        }
        c++;
    }
    printf("%d",d);
}
