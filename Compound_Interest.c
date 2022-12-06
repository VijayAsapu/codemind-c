#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t, ci;
    scanf("%f", &p);
    scanf("%f", &r);
    scanf("%f", &t);
    ci = p * pow((1 + r / 100), t) - p;
    printf("%0.2f", ci);
}