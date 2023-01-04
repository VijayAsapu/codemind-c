#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int rows=2*n-1;
    int s=0;
    int cols=rows-1;
    int a[rows][rows];
  while(n!=0)
  {
      for(i=s;i<=cols;i++)
      {
          for(j=s;j<=cols;j++)
          {
              if(i==s || i==cols || j==s || j==cols)
              {
                  a[i][j]=n;
              }
          }

      }
        s++;
        cols--;
        n--;
  }
  for(i=0;i<rows;i++)
  {
      for(j=0;j<rows;j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("
");
  }
}