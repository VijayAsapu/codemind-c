#include<stdio.h>
int main()
{
    int num1,oc=0,ec=0,r;
    scanf("%d",&num1);
    while(num1)
    {
        r=num1%10;
        num1=num1/10;
        if(r%2==0)
        ec=ec+1;
        else
        oc=oc+1;
    }
    if(oc==0)
    printf("Even");
    else if(ec==0)
    printf("Odd");
    else
    printf("Mixed");
}