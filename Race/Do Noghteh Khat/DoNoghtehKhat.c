#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    if(a==c){
        printf("Vertical");}
    if(b==d){
        printf("Horizontal");}
    if(a!=c && b!=d)
        printf("Try again");
}