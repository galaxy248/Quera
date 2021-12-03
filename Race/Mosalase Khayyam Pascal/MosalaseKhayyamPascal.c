#include <stdio.h>

int main()
{
    int i,rows,k,val,j;
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++)
          {
              int val = 1;
              for (int j = 1; j < (rows - i); j++)
              {

              }
              for (int k = 0; k <= i; k++)  {
                      printf( "%d ",val);
                      val = val * (i - k) / (k + 1);
              }
                     printf("\n");
          }
}