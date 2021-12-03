#include <stdio.h>
int main()
{
    int d,t,a,i,j;
        scanf("%d%d%d",&d,&t,&a);
        for( i = 0; i<= d/4 ;  i++){
            for(j = 0 ; j <= d/4 ; j++){
               if(d == (i*t) + (j*a)){
                   printf("%d %d",i,j);
                   return 0;
               }
            }
        }
            printf("-1");
            return 0;
}