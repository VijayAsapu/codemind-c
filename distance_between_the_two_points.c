#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    float e;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    e=pow((c-a),2)+pow((d-b),2);
    e=sqrt(e);
    printf("%.4f",e);
}