#include<stdio.h>  
int main()
{
   int n,i,b=0,a=0;    
   scanf("%d",&n);    
   b=n/2;    
   for(i=2;i<=b;i++)    
   {    
       if(n%i==0)    
       {    
          printf("Not Prime");    
          a=1;    
          break;    
        }    
    }    
    if(a==0)    
    printf("Prime");     
}