#include<stdio.h>  
int main(){    
int n,i,m=0,flag=0;    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Not Prime");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("Prime");     
return 0;  
 }    
