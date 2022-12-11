#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,m=0,s=0;
    scanf("%d%d%d",&a,&b,&c);
    m=pow((a),b);
    s=m%c;
    printf("%d",s);
}