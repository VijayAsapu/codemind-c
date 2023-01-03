#include<stdio.h>
int main()
{
    int n,rows,cols;
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=rows;cols++)
        {
            if(cols==1||rows==n||rows==cols)
            printf("*");
            else
            printf(" ");
        }
        printf("
");
    }
}