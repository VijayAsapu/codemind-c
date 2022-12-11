#include<stdio.h>
int main()
{
    int n,i,s=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        s=s+i;
        p=p*i;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}