#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[999];
    int i;
    int d=0;
    for(i = 0 ; i <= 999 ; i++){
        scanf("%d",&a[i]);
        if(a[i]<1000){
        d++;
        if(a[i]==0){
            break;
        }
    }else{return 0;}
    }
    for( i = d-2 ; i >= 0 ; i--){
        printf("%d \n",a[i]);
    }
}