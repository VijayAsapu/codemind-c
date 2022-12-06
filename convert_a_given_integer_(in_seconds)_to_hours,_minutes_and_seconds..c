#include<stdio.h>
int main()
{
    int H,M,S,i;
    scanf("%d",&i);
	H = (i/3600); 
	M = (i -(3600*H))/60;
	S = (i -(3600*H)-(M*60));
    printf("H:M:S-%d:%d:%d",H,M,S);
}